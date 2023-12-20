# SR01 - TD 4

## Structures de contrôle, boucles,  
## Fonctions et passage de paramètres  

## Ex1 : fichier  ex1.c  

Ecrire une fonction qui récupère une chaîne de caractères et qui affiche :  

Le longueur total de la chaîne  
Le nombre de caractères majuscules  
Le nombre de caractères minuscules  
Le nombre des blancs  
Le nombre des autres caractères  
Vous pouvez utiliser la fonction fgets() pour lire la chaine de caractères (au lieu de scanf())  
Tester votre fonction dans le main.  


## Ex2 : fichiers ex2a.c, ex2b.c ex2c.c  

Ex2a.c : A l'aide de plusieurs boucles for() imbriquées, réaliser le dessin d'un arbre de sapin :  
(Utiliser la constante symbolique TAILLE pour la  largeur du sapin :  #define TAILLE  10  )  


         *  

        ***  

       *****  

      *******  

     *********  

    ***********  

   *************  

  ***************  

 *****************  

*******************  
       ||||  

       ||||  

       ||||  

       ||||  



Ex2b.c : En ajoutant encore des boucles for() , afficher dans cette version une forêt de sapin.  
(Utiliser la constante symbolique NBRE pour le nombre des arbres :  #define NBRE 3 )  



         *                   *                   *  

        ***                 ***                 ***  

       *****               *****               *****  

      *******             *******             *******  

     *********           *********           *********  

    ***********         ***********         ***********  

   *************       *************       *************  

  ***************     ***************     ***************  

 *****************   *****************   *****************  

******************* ******************* *******************  

        ||||                ||||                ||||  

        ||||                ||||                ||||  

        ||||                ||||                ||||  

        ||||                ||||                ||||  

        ||||                ||||                ||||  







## Ex3 : fichier ex3a.c  ex3b.c  

Ex3a.c : Ecrire la fonction matrice_info() qui récupère une matrice d'entiers et qui affiche :  

Le nombre des éléments positifs  
Le nombre des éléments négatifs  
Le nombre des zéros,  
Et si le nombre de zéros dépasse le 80% d'éléments, la fonction affiche « matrice creuse »  
Important: Le compilateur a toujours besoin de la taille de la seconde dimension(nombre de colonnes)  
pour calculer l'adresse d'un élément;  
En effet pour la matrice (int tab[N][M]), l'élément tab[i][j] se trouve à l'adresse tab + (i*M+j)*sizeof(int)  

Vous pouvez donc passer la matrice avec l'une de methodes suivantes:  

void matrice_info(int tab[N][M])  
void matrice_info(int tab[][M])  
void matrice_info(int (*tab)[M])  

Ex3b.c : Ecrire une fonction matrice_creuse() qui récupère une matrice initialisée d'entiers et un vecteur d'entier  
et qui range tous les éléments non nuls de la matrice dans le vecteur.  
En plus la fonction retourne la valeur 1 si la matrice est creuse , 0 sinon.  

Tester à chaque fois vos fonctions dans le main.  


## Ex4 : jeu d'allumettes ex4.c  

(pour tester le jeu vous pouvez lancer ~sr01/td/td4/ex4)  
Un certain nombre d'allumettes est disposé entre les deux partis, l'ordinateur et vous. Le but du jeu est
de ne pas retirer la dernière allumette. Pour se faire, une prise maximale est désignée par le joueur.  
En début de partie, on demande :  

1. Le nombre d'allumettes disposées entre les deux joueur (de 10 à 60).  
2. Le nombre maximal d'allumettes que l'on peut retirer.  
3. Qui commence (0 pour le joueur et 1 pour l'ordinateur).  

Puis, tour à tour, chaque parti donne le nombre d'allumettes qu'il prend. La partie se termine lorsqu'il n y a plus
d'allumettes sur la table. La personne ayant tirée la dernière allumette est le perdant, l'autre le vainqueur.  

L'ordinateur répond grâce à la fonction décrite ci-dessous :  

int jeu_ordi (int nb_allum, int prise_max)  
{  
int prise = 0;  
int s = 0;  
float t = 0;  
s = prise_max + 1;  
t = ((float) (nb_allum - s)) / (prise_max + 1);  
while (t != floor (t))  
  {  
   s--;  
   t = ((float) (nb_allum-s)) / (prise_max + 1);  
  }  
prise = s - 1;  
if (prise == 0)  
prise = 1;  
return (prise);  
}  

Nb_allum est le nombre d'allumettes sur la table (au moment du coup à jouer).  
Prise_max est le nombre maximum d'allumettes autorisé lors d'une prise.  
La fonction retourne en sortie le nombre d'allumettes prises par l'ordinateur.   
Exemple :prise = jeu_ordi (10,3) ;  
La fonction floor donne l'arrondi inférieur d'un nombre, elle nécessite la bibliothèque <math.h>  
L'utilisation de la bibliothèque <math.h> oblige à linker avec -lm : >gcc -o prog prog.c -lm  
voici la déclaration des variables locales dans le main() :  

int main ()  
{  
int nb_max_d=0; /*nbre d'allumettes maxi au départ*/  
int nb_allu_max=0; /*nbre d'allumettes maxi que l?on peut tirer au maxi*/  
int qui=0; /*qui joue? 0=Nous --- 1=PC*/  
int prise=0; /*nbre d'allumettes prises par le joueur*/  
int nb_allu_rest=0; /*nbre d'allumettes restantes*/  
....  

Après chaque jeu le programme affiche les allumettes qui restent :  
ceci est à réaliser dans la fonction : void afficher_allumettes(int n)  
voici le resultat de l'appel de  afficher_allumettes(10);  

 o o o o o o o o o o  

 | | | | | | | | | |  


##Ex5 : jeu de la vie  ex5.c  

Le Jeu de la vie est l'exemple le plus connu d'automate cellulaire. Ce jeu, décrit en 1970 par le mathématicien John Conway
de l'université de Cambridge, vise à modéliser d'une fa�on simple l'évolution d'organismes vivants.  

Le jeu de la vie évolue normalement sur un damier infini. Chaque case est occupée par une cellule qui peut �tre vivante ou morte.  
A chaque génération, chaque cellule peut na�tre, mourir, ou rester dans son état. Les r�gles qui permettent de passer d'une
génération à l'autre sont précises et ont été choisies avec soin pour que l'évolution des organismes soit intéressante et imprévisible.  
En premier lieu, notons que sur un damier infini, chaque case a exactement 8 voisins. Pour créer la génération suivante à partir
de la génération courante, J. Conway a fixé les règles suivantes :  
Une cellule ayant exactement 2 ou 3 voisins vivants survit la génération suivante.  
Une cellule ayant au moins 4 cellules voisines vivantes meurt d'étouffement à la génération suivante.  
Une cellule ayant au plus une cellule voisine vivante meurt d'isolement à la génération suivante.  
Sur une case vide ayant exactement 3 voisins vivants, une cellule na�tra à la génération suivante.  
Afin d'implémenter ce jeu, on considère le damier infini comme une matrice "torique". Le damier sera représenté par une matrice
dont les bords droite et gauche sont reliés entre eux, ainsi que les bords supérieur et inférieur.  
Codez ce jeu, en découpant soigneusement votre programme en plusieurs fonctions (fonction d'initialisation du damier , fonction
de calcul de nombre de voisins, fonction d'affichage, ...)  

Vous pouvez utiliser la fonction rand() pour l'initialisation du damier.

Soignez l'affichage, pour pouvoir suivre l'évolution des cellules d'une génération à l'autre.
