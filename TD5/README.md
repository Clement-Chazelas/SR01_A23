# SR01 - TD 5

## Fonctions, main(), Bibliothèques


## Ex1 : passage de paramètres à la fonction main()

Ecrire le programme calcul qui réalise les taches suivantes:  
     - la somme de plusieurs réels passés en argument dans la ligne de commande  avec l'option -a  (addition)  
     - le produit de plusieurs réels passés en argument dans la ligne de commande  avec l'option -p  (produit)  
     - la division de deux réels passés en argument dans la ligne de commande  avec l'option -d  (division)  
Voici un exemple d'appel du programme  
    > calcul -a  10.0 20 15.5  
       10.0 +  20.0 +  15.5  =  45.0  


## Ex2 : réalisation de la bibliothèque  mystrlib.a  

fichiers:  mystr.h   mystr.c   teststring.c  libmystr.a  

But: regrouper des nouvelles fonctions de manipulation des chaînes de caractères dans une
bibliothèque libmystr.a  les fonctions seront déclar�es dans  un fichier d'entête  mystr.h ,  
Un programme C qui voudra ensuite utiliser ces fonctions devra faire un #include "mystr.h"
et sera "linké" avec cette bibliothèque : "gcc -o prog prog.c -L. -lmystr".   

Travail demandé:  
**Etape 1 :** écrire  un programme  mystr.c  qui implementera un ensemble de fonctions pour manipuler des chaines de caractères,
voici quelques exemples de fonctions que vous pouvez écrire:  

    void mystrupdown(char *s1, char *s2)          /* inverse les majuscules et les minuscules de s1 et retourne le resultat dans s2 exemple: s1="TiCtAc"  s2="tIcTaC" */  
    void mystrinv(char *s1, char *s2)        /* inverse la chaîne s1 et retoune le résultat dans s2:   exemple  s1="tac" s2="cat" */  
    int     mystrchrn(char *s, char c)                        /* retourne le nombre d'occurrences de c dans  la chaîne s */  
    void mystrncpy(char *s1, char *s2, int n)      /* copie les n derniers caractères de s1 dans s2 et retourne s2 */  
    void mystrncat(char *s1, char *s2, int n)      /* concatène au plus les n derniers caractères de s1 à la chaîne s2 */  
       .....                                                                   /* vous pouvez ajouter éventuellement d'autres fonctions*/  

Ce programme, ainsi que tous les programmes qui, par la suite, feront appel à cette bibliothèque de fonctions,
devront faire un #include du fichier "mystr.h" dont le contenu est ci-dessous :  

/*fichier d'entête  mystr.h*/  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include ....  
#define ....  

void   mystrupdown(char *s1, char *s2);
void   mystrinv(char *s1, char *s2);
int     mystrchrn(char *s, char c);
void   mystrncpy(char *s1, char *s2, int n);
void   mystrncat(char *s1, char *s2, int n);
.....

**Etape 2 :** Archiver ces fonctions dans la bibliothèque  libmystr.a  pour cela il faut:  

             - compiler votre code source mystr.c avec l'option -c pour obtenir l'objet mystr.o  
                   > gcc -c  mystr.c  
             - ajouter ce programme dans la bibliothèque  libmystr.a  
                   > ar  rvs  libmystr.a   mystr.o  
La bibliothèque est créée si elle n'existait pas. Si "mystr.o" était déjà dans la bibliothèque "libmystr.a",
celui-ci est remplacé par le nouvel objet.  
Les fonctions de la bibliothèque peuvent être listées par la commande "nm -s libmystr.a".  

**Etape 3 :** Ecrire un programmes de test  teststring.c  qui permet de tester l'ensemble des fonctions de la bibliothèque.  
ce programme doit faire un #include "mystr.h"  et sera "linké" avec la bibliothèque libmystr.a:  
       >gcc -o teststring teststring.c -L. -lmystr  

le programme teststring.c  commence par afficher la liste des fonctions disponibles,
et demande ensuite à l'utilisateur son choix;  
le programme demande ensuite les arguments nécessaires pour appeler la fonction choisie
et affiche enfin le résultat.  
voici un exemple d'appel au programme teststring.  

    >teststing  
          sélectionner une fonction :  
                1- mystrncpy  
                2- mystrncpy  
                ......  
                6 - mystrchrn  
                .....  
          choix = ? 6  
 
          donner la chaîne de caractères?:   tictac  
          donner le caractère recherché ?:   c  
        
          résultat: il y a  2 occurence du carctère c  dans tictac.  


## Ex3 : Manipulation des fichiers  

Ecrie un programme qui prend en argument le nom d'un fichier, puis inverse les caractères de ce fichier et affiche le nombre de caractères inversés. Par exemple, si votre fichier contient : .suot à ruojnoB , son contenu après l'exécution du programme devient : Bonjour à tous.
