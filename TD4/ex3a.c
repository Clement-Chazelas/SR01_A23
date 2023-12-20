#include <stdio.h>
#define N 3
#define M 3
/*
void matrice_info(int tab[][M])
{
    int nombrePositifs = 0;     //On initialise les variables que l'on utilisera par la suite
    int nombreNegatifs = 0;
    int nombreZeros = 0;
    int nombreElements = N*M;

    for (int i = 0; i < N; i++) {       //On parcours l'ensemble de la matrice à l'aide de deux boucles for imbriquées
        for (int j = 0; j < M; j++) {
            if (tab[i][j] > 0) {
                nombrePositifs++;   //Si le nombre est positif on incrémente le nombre de positifs
            } else if (tab[i][j] < 0) {
                nombreNegatifs++;   //Si le nombre est négatif on incrémente le nombre de négatifs
            } else {
                nombreZeros++;      //Sinon on incrémente le nombre de zéros
            }
        }
    }

    printf("Nombre d'elements positifs : %d\n", nombrePositifs);    //On affiche les informations que l'on vient d'obtenir
    printf("Nombre d'elements negatifs : %d\n", nombreNegatifs);
    printf("Nombre de zeros : %d\n", nombreZeros);

    if ((double)nombreZeros / nombreElements > 0.8) {   //Si jamais le nombre de zéros dépasse 80% de la matrice alors on affiche qu'il s'agit
        printf("Matrice creuse\n");                     //d'une matrice creuse et on retourne 1
        return 1;
    }
    return 0;   //Sinon on retourne 0
}


void matrice_info_pointeurs(int* tab, int n, int m)
{
    int Positifs = 0;     //On initialise les variables que l'on utilisera par la suite
    int Negatifs = 0;
    int Zeros = 0;
    int Elements = n*m;

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++) {
            if (tab[i*m+j] > 0) {
                Positifs++;
            }
            else if (tab[i*m+j] < 0) {
                Negatifs++;
            }
            else{
                Zeros++;
            }
        }
    }

    printf("Nombre d'elements positifs : %d\n", Positifs);    //On affiche les informations que l'on vient d'obtenir
    printf("Nombre d'elements negatifs : %d\n", Negatifs);
    printf("Nombre de zeros : %d\n", Zeros);

    if ((double)Zeros / Elements > 0.8) {   //Si jamais le nombre de zéros dépasse 80% de la matrice alors on affiche qu'il s'agit
        printf("Matrice creuse\n");                     //d'une matrice creuse et on retourne 1
        return 1;
    }
    return 0;   //Sinon on retourne 0
}


int main()
{
    int matrice[N][M] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    matrice_info(matrice);
    matrice_info_pointeurs(&matrice[0][0], N, M);
}
*/
