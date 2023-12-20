#include <stdio.h>
#include <stdlib.h>
/*

int damier[8][8];


void init()
{
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            damier[i][j] = rand()%2;    //On remplit chaque "case" du damier par 0 ou 1 de mani�re al�atoire
        }
    }
}

void afficher_damier()
{
    for(int i=0;i<8;i++){   //On parcourt le damier �l�ment par �l�ment � l'aide de deux boucles for imbriqu�es
        for(int j=0;j<8;j++){
            if(damier[i][j] ==0){
                printf("X");       //Si la cellule est vivante alors on affiche X
            }
            else{
                printf("_");        //Sinon c'est qu'elle est morte et alors on affiche _
            }
        }
        printf("\n");
    }
    printf("\n");
}

int countNeighbors(int i, int j)
{
    int count = 0;
    for(int x=-1;x<=1;x++){     //On se d�place dans les voisins de l'�l�ment [i][j]
        for(int y=-1;y<=1;y++){
            if(!(x == 0 && y == 0)){
                int X = (i+x+8);
                int Y = (j+y+8);
                count += damier[X][Y];  //On ajoute donc 0 si la cellule est mort et 1 si elle est vivante, cela permet de compter
            }                           //efficacement le nombre de voisin de la cellule
        }
    }
    return count;
}



void updateGrid()
{
    int newGrid[8][8];      //On cr�e un nouveau damier pour pouvoir continuer d'effectuer des op�rations sur l'ancien
    int i, j;

    for (i=0;i<8;i++){  //On parcourt la matrice �l�ment pas �l�ment en utilisant deux boucles for imbriqu�es
        for (j=0;j<8;j++){
            int neighbors = countNeighbors(i, j);
            if (damier[i][j] == 1) {
                // Cellule vivante
                if (neighbors == 2 || neighbors == 3) {     //On regarde si la cellule survit ou non
                    newGrid[i][j] = 1;
                } else {
                    newGrid[i][j] = 0;
                }
            } else {
                // Cellule morte
                if (neighbors == 3) {   //On regarde si une cellule doit na�tre
                    newGrid[i][j] = 1;
                } else {
                    newGrid[i][j] = 0;
                }
            }
        }
    }
    for (i=0;i<8;i++) {     //On remplace l'ancien damier par le nouveau
        for (j=0;j<8;j++) {
            damier[i][j] = newGrid[i][j];
        }
    }
}

int main()
{
    int nbr_gen = 0;

    init();
    printf("Combien de generations voulez vous voir ? : ");
    scanf("%d", &nbr_gen);

    for(int i=0;i<nbr_gen;i++){
        afficher_damier();
        updateGrid();
    }
}
*/
