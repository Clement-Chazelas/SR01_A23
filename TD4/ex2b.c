#include <stdio.h>
#define TAILLE 10
#define NBRE 3
/*
int main()
{
    for (int ligne = 1; ligne <= TAILLE; ligne++) { //Affin d'afficher 3 sapin on modifie un peu la boucle utilis�e dans l'exercice pr�c�dent
        for (int sapin = 0; sapin < NBRE; sapin++) {    //On affiche trois sapins
            for (int espace = 1; espace <= TAILLE - ligne; espace++) {      //On commence par se d�caler avant d'afficher les �toiles
                printf(" ");
            }
            for (int etoiles = 1; etoiles <= 2 * ligne - 1; etoiles++) {    //On affiche les �toiles
                printf("*");
            }
            for (int espace = 1; espace <= TAILLE - ligne; espace++) {      //On se d�cale afin de "reset" le d�calage pour le sapin suivant
                printf(" ");
            }
            printf(" ");    On s�pare chaque sapin d'un espace
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {       //On affiche les troncs des sapins, on modifie encore une fois la boucle utilis�e pr�c�dement
        for (int sapin = 0; sapin<(NBRE/2 +2); sapin++) {
            for (int espace = 0; espace <= (TAILLE/2) +1; espace++) {
                printf(" ");
            }
            printf("||||");
            for (int espace = 0; espace <= (TAILLE/2) +3; espace++) {
                printf(" ");
            }
        }
        printf("\n");   //On passe � la ligne du tronc suivante
    }
}

*/
