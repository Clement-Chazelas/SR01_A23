#include <stdio.h>
#define N 3
#define M 3

int matrice_creuse(int matrice[][M], int vecteur[]) {
    int estCreuse = 1;  //On suppose que la matrice est creuse de base
    int index = 0;      //On initialise une variable qui nous servira pour indiquer la taille du vecteur

    for (int i = 0; i < N; i++) {       //On parcours la matrice à l'aide de deux boucles for imbriquées
        for (int j = 0; j < M; j++) {
            if (matrice[i][j] != 0) {       //Si l'élément est non nul alors on l'ajoute dans le vecteur et on augmente sa taille
                vecteur[index] = matrice[i][j];
                index++;
                if (estCreuse) {    //Si la matrice est indiqué comme cresue on la fait passer comme non creuse
                    estCreuse = 0;
                }
            }
        }
    }

    if(estCreuse == 0){
        printf("{ ");
        for(int i =0;i<index;i++){
            printf("%d ", vecteur[i]);
        }
        printf("}");
    }
    return estCreuse;
}

void matrice_info_pointeurs(int* tab, int n, int m)
{
    int estCreuse = 1;  //On suppose que la matrice est creuse de base
    int index = 0;      //On initialise une variable qui nous servira pour indiquer la taille du vecteur

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
    int matrice[N][M] = {       //On initialise une matrice
        {4, 0, 0},
        {0, 1, 0},
        {2, 0, 0}
    };
    int vecteur[N * M];     //On crée le vecteur qui recevra les valeurs non nulles de la matrice

    int estCreuse = matrice_creuse(matrice, vecteur);   //On test la matrice

    if (estCreuse) {
        printf("\nLa matrice est creuse \n");
    } else {
        printf("\nLa matrice n'est pas creuse \n");
    }
}
*/
