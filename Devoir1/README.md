# SR01

## Devoir 1 SR01 Octobre 2023!


A remettre pour   25 octobre 2023

- Ce devoir peut se faire en binôme. Les deux étudiants formant un binôme doiventappartenir au même groupe de TD.
- Les différents binômes devront remettre un seul fichier **\*.zip** contenant les codes sources ainsi qu’un rapport électronique (pdf) de quelques pages.
- Le dernier délai pour la remise est fixé pour le **25 octobre 2023**. 

## **Exercice 1** 

Pour chacun de ces programmes, exécuter le programme et donner une explication du resultat obtenu:

#### **Programme 1**

#include  <stdio. h> 
int  main (){ 
int  A=20,   B =5; 
int  C=!--  A/++! B; 
printf  ( "A=%d  B=%d  c=%d  \n" ,  A, B, C); 
}

  
#### **Programme 2**
 
#include  < stdio. h>
int  main (){ 
int  A=20,   B=5,   C=-10,  D=2; 
printf  ( "%d  \n" ,  A&&B ||!0&&  C++&&!D++);  
printf  ( "c=%d  d=%d  \n" ,  C,  D); 
}


#### **Programme 3**

#include  < stdio. h>
int  main (){ 
int  p [4]={1, -2, 3, 4}; 
int  \* q=p; 
printf  ( "c=%d\n" ,  \*++  q\*\* q ++);  6  printf  ( "c=%d  \n"  ,\* q); 
}


#### **Programme 4**

#include  <stdio. h>
int  main (){ 
int  p [4]={1, -2, 3, 4}; 
int  \* q=p; 
int  d=\* q&\*q ++|\* q ++; 
printf  ( "d=%d\n" ,  d); 
printf  ( "q=%d  \n"  ,\* q); 
}


#### **Programme 5**

include  < stdio. h>
int  main (){ 
int  a=-8,   b =3; 
int  c=  ++a&&--b  ?  b --:  a ++; 
printf  ( "a=%d  b=%d  c=%d\n" , a, b, c);
}


#### **Programme 6**

include  <stdio. h>
int  main (){ 
int    a=-8  ,  b  =3; 4  a     >    >=2^ b; 
printf  ( "a=%d\n" , a); 
}


### **Exercice 2** 

1. Écrire un programme qui lit les notes de  *N* étudiants de l’UTC dans un devoir de l’UV SR01 et les mémorise dans un tableau POINTS de dimension *N* . 
1. Écrire des programmes pour rechercher et afficher :
- La note maximale du devoir SR01,
- La note minimale du devoir SR01,
- La moyenne des notes du devoir SR01.
3. A partir des POINTS des étudiants, établir un table au NOTES de dimension 7 qui est composé de la façon suivante:
- NOTES[6] contient le nombre de notes 60 
- NOTES[5] contient le nombre de notes de 50 à 59 
- NOTES[4] contient le nombre de notes de 40 à 49 
- ...
- NOTES[0] contient le nombre de notes de 0 à 9 
4. Établir un graphique en nuage de points représentan t le tableau notes. Utilisez le symbole ’o’ pour représenter le point dans le graphique et affichez le domaine des notes en dessous du graphique.
4. Établir un graphique en bâtons représentant le tabl eau NOTES. Utilisez les symboles ou autres pour la représentation des bâtons et affichez le domaine des notes en dessous du graphique.

**Idée:**  Déterminer la valeur maximale MAXN dans le tableau  NOTES et afficher autant de lignes sur l’écran. (Dans l’exemple ci-dessous, *MAXN* “ 6).




### **Exercice 3** 

L’objectif de cet exercice est de collecter un ensemble de données relatives à des restaurants et  de  les  manipuler  par  la  suite.  Les  informations  concernant  chaque  restaurant  sont stockées dans un fichier (restau.txt) selon le format donné dans la figure 2.

Dans ce programme vous êtes sensés : 

1. Déclarer une structure Restaurant contenant les cha mps suivants : *nom\_restaurant*, *adresse\_restaurant*, *position\_restaurant*  et sa spécialité.
2. A travers la fonction  *int lire\_restaurant (char\* chemin, Restaurant resta urants [])*, récupérer  dans  le  tableau  restaurants  toutes  les  informations  concernant  chaque restaurant inséré dans le fichier nommé chemin. La  fonction  *lire\_restaurant*  re- tournera en fin de lecture le nombre de restaurants lu à 
 partir du fichier.
3. Implémenter la fonction *inserer\_restaurant(Restaurant restaurant)*  permettant d’insérer un restaurant à la fin du fichier (restau.txt) .
4. Implémenter la fonction *void cherche\_restaurant(double x, double y, double rayon\_recherche, Restaurant results[])*  qui prend en paramètre la position actuelle d’un utilisateur et un rayon de recherche et qui remplit le tableau  *results* par les restaurants présents dans le rayon de recherche.
5. Implémenter la fonction *void cherche\_par\_specialite(double x, double y, cha r \* spe- cialite[], Restaurant results[])* qui prend en paramètre la position actuelle d’un util- isateur et une liste de spécialité et qui remplit le tableau *results* par les restaurants satisfaisants au moins une des spécialités passées en paramètre.

   **Remarque** : pour la dernière question, les restaurants insérés dans le tableau *results* doivent être ordonnés du plus proche au plus loin par rapport à la position passée en paramètre.

6. Ecrire la fonction  *main()* permettant de proposer un menu à l’utilisateur perm ettant de faire appel aux différentes fonctions mentionnées ci-dessus.

