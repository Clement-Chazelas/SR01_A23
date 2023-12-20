#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>


void handler_child1(int signo) {

}


void handler_child2(int signo) {

}

void handler_parent(int signo) {

}

void ecrire_fils(int nb, char* name) {
    FILE* fichier = fopen(name, "w");
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    fprintf(fichier, "%d", nb);
    fclose(fichier);
}

void lire_pere(int* nb, char* name) {
    FILE* fichier = fopen(name, "r");
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    fscanf(fichier, "%d", nb);

    fclose(fichier);

    if (remove(name) != 0) {
        perror("Erreur lors de la suppression du fichier");
        exit(EXIT_FAILURE);
    }
}



int main() {
    // Enregistrement des gestionnaires de signal
    signal(SIGUSR1, handler_child1);
    signal(SIGUSR2, handler_child2);
    
    //Création des deux fichiers texte
    char* name1 = "fichier1.txt";
    char* name2 = "fichier2.txt";

    // Création du premier fils
    pid_t child1 = fork();
    
    int nb1, nb2;

    if (child1 == -1) {
        perror("Erreur lors de la création du premier fils");
        exit(EXIT_FAILURE);
    }

    if (child1 == 0) {
        pause();  // Le premier fils se met en pause directement
        printf("Entrez la valeur que vous voulez écrire dans le fichier 1 : ");
        scanf("%d", &nb1);
        ecrire_fils(nb1, name1);	//On écrit dans le fichier 1 le nombre entré par l'utilisateur
        kill(getppid(), SIGUSR2);	//On réveille le père

        exit(EXIT_SUCCESS);
    } else {
        // Création du deuxième fils
        pid_t child2 = fork();

        if (child2 == -1) {
            perror("Erreur lors de la création du deuxième fils");
            exit(EXIT_FAILURE);
        }

        if (child2 == 0) {
            printf("Entrez la valeur que vous voulez écrire dans le fichier 2 : ");
            scanf("%d", &nb2);
            ecrire_fils(nb2, name2);	//On écrit dans le fichier 1 le nombre entré par l'utilisateur
            kill(child1, SIGUSR1); 	// On réveille le premier fils
            exit(EXIT_SUCCESS);
        } else {
            pause();  	// Le père se met en pause après la création des deux fils

            lire_pere(&nb1, name1);
    	    lire_pere(&nb2, name2);

   	    printf("\nValeur lue dans le fichier 1 : %d", nb1);
    	    printf("\nValeur lue dans le fichier 2 : %d", nb2);
    
            wait(NULL);
            wait(NULL);

            exit(EXIT_SUCCESS);
        }
    }
}
