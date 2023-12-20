#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int jeu_ordi(int nb_allum, int prise_max) {
    int prise = 0;  //On initialise les diférentes variables qui vont nous servir
    int s = 0;
    float t = 0;
    s = prise_max + 1;  //On augmente le nombre de prise maximum
    t = ((float)(nb_allum - s)) / (prise_max + 1);
    while (t != floor(t)) {
        s--;
        t = ((float)(nb_allum - s)) / (prise_max + 1);
    }
    prise = s - 1;
    if (prise == 0)
        prise = 1;
    return (prise);
}

void afficher_allumettes(int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {   //On affiche les têtes des allumettes
        printf("o ");
    }
    printf("\n");   //On passe à la ligne des batons
    for (int i = 0; i < n; i++) {       //On affiche le corps des alumettes
        printf("| ");
    }
    printf("\n");
}

int main()
{
    int nb_max_d = 0;       //On initialise les différentes variables qui nous seront utiles par la suite
    int nb_allu_max = 0;
    int qui = 0;
    int prise = 0;
    int nb_allu_rest = 0;

    printf("Entrez le nombre d'allumettes au depart (entre 10 et 60) : ");
    scanf("%d", &nb_max_d);
    printf("Entrez le nombre maximal d'allumettes que vous pouvez tirer : ");
    scanf("%d", &nb_allu_max);
    printf("Entrez qui commence (0 pour le joueur et 1 pour l'ordinateur) : ");
    scanf("%d", &qui);

    nb_allu_rest = nb_max_d;    //Au début le nombre d'allumettes restantes est égal au nombre total d'allumettes

    while (nb_allu_rest > 0) {  //Tant qu'on a des allumettes en jeu alors le jeu continue
        if (qui == 0) {     //Le joueur joue son tour
            printf("Combien d'allumettes voulez-vous tirer (1-%d) ? ", nb_allu_max);
            scanf("%d", &prise);

            if (prise < 1 || prise > nb_allu_max || prise > nb_allu_rest) {     //On vérifie que l'utilisateur ne se trompe pas dans sa saisie
                printf("Nombre d'allumettes invalide. Reessayez.\n");
                continue;       //Tant que la saisie n'est pas valide on répète le bloc de code ci-dessus
            }
        }
        else {      //L'ordinateur joue son tour
            prise = jeu_ordi(nb_allu_rest, nb_allu_max);
            printf("L'ordinateur prend %d allumettes.\n", prise);
        }

        nb_allu_rest -= prise;      //On actualise le nombre d'allumette restantes et on les affiches
        afficher_allumettes(nb_allu_rest);

        qui = 1 - qui;      //On permet ainsi de changer de joueur en oscillant entre 0 et -1
    }

    if (qui == 0) {     //Si qui == cela signifie que la dernière personne à avoir joué est l'ordinateur, c'est donc le joueur qui gagne
        printf("Felicitations, vous avez gagne !\n");
    } else {
        printf("L'ordinateur a gagne. Essayez encore !\n");
    }
}
*/
