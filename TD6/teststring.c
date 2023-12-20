#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrupdown.h"
#include "mystrinv.h"
#include "mystrchrn.h"
#include "mystrncpy.h"
#include "mystrncat.h"


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
                printf("Entrez la chaîne de caractères s1 : ");
                scanf("%s", s1);
                char s2[100];
                mystrupdown(s1, s2);
                printf("Résultat : %s\n", s2);
                break;
            }
            case 2: {
                char s1[100];
                printf("Entrez la chaîne de caractères s1 : ");
                scanf("%s", s1);
                char s2[100];
                mystrinv(s1, s2);
                printf("Résultat : %s\n", s2);
                break;
            }
            case 3: {
                char s[100];
                char c;
                printf("Entrez la chaîne de caractères s : ");
                scanf("%s", s);
                printf("Entrez le caractère c : ");
                scanf(" %c", &c);
                int count = mystrchrn(s, c);
                printf("Résultat : %d\n", count);
                break;
            }
            case 4: {
                char s1[100];
                printf("Entrez la chaîne de caractères s1 : ");
                scanf("%s", s1);
                char s2[100];
                int n;
                printf("Entrez la valeur de n : ");
                scanf("%d", &n);
                mystrncpy(s1, s2, n);
                printf("Résultat : %s\n", s2);
                break;
            }
            case 5: {
                char s1[100];
                printf("Entrez la chaîne de caractères s1 : ");
                scanf("%s", s1);
                char s2[100];
                printf("Entrez la chaîne de caractères s2 : ");
                scanf("%s", s2);
                int n;
                printf("Entrez la valeur de n : ");
                scanf("%d", &n);
                mystrncat(s1, s2, n);
                printf("Résultat : %s\n", s2);
                break;
            }
            default:
                printf("Choix invalide\n");
        }
    }
}

