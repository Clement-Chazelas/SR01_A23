#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr.h"

/*
int main(){
    int choice = 0;
    while(choice != 6){
        printf("Liste des fonctions disponibles :\n");
        printf("1. mystrupdown\n");
        printf("2. mystrinv\n");
        printf("3. mystrchrn\n");
        printf("4. mystrncpy\n");
        printf("5. mystrncat\n");
        printf("Veuillez saisir votre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char s1[100];
                printf("Entrez la cha�ne de caract�res s1 : ");
                scanf("%s", s1);
                char s2[100];
                mystrupdown(s1, s2);
                printf("R�sultat : %s\n", s2);
                break;
            }
            case 2: {
                char s1[100];
                printf("Entrez la cha�ne de caract�res s1 : ");
                scanf("%s", s1);
                char s2[100];
                mystrinv(s1, s2);
                printf("R�sultat : %s\n", s2);
                break;
            }
            case 3: {
                char s[100];
                char c;
                printf("Entrez la cha�ne de caract�res s : ");
                scanf("%s", s);
                printf("Entrez le caract�re c : ");
                scanf(" %c", &c);
                int count = mystrchrn(s, c);
                printf("R�sultat : %d\n", count);
                break;
            }
            case 4: {
                char s1[100];
                printf("Entrez la cha�ne de caract�res s1 : ");
                scanf("%s", s1);
                char s2[100];
                int n;
                printf("Entrez la valeur de n : ");
                scanf("%d", &n);
                mystrncpy(s1, s2, n);
                printf("R�sultat : %s\n", s2);
                break;
            }
            case 5: {
                char s1[100];
                printf("Entrez la cha�ne de caract�res s1 : ");
                scanf("%s", s1);
                char s2[100];
                printf("Entrez la cha�ne de caract�res s2 : ");
                scanf("%s", s2);
                int n;
                printf("Entrez la valeur de n : ");
                scanf("%d", &n);
                mystrncat(s1, s2, n);
                printf("R�sultat : %s\n", s2);
                break;
            }
            default:
                printf("Choix invalide\n");
        }
    }
}
*/
