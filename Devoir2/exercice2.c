#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

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
    char* name1 = "fichier1.txt";

    pid_t pid1 = fork();

    if (pid1 == -1) {
        perror("Erreur lors de la création du fils");
        exit(EXIT_FAILURE);
    }

    if (pid1 == 0) {
        int nb1; 
        printf("Entrez la valeur que vous voulez écrire dans le fichier : ");
        scanf("%d", &nb1);
        ecrire_fils(nb1, name1);
        exit(EXIT_SUCCESS);
    }

    waitpid(pid1, NULL, 0);

    int valeur1;
    lire_pere(&valeur1, name1);

    printf("\nValeur lue dans le fichier: %d", valeur1);

    return 0;
}
