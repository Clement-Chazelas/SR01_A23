![](Aspose.Words.b5f78e6f-c0d7-4c1e-89bd-29219fea21c7.001.jpeg)

Devoir 2 SR01 

- Ce devoir doit se faire en binôme. Les deux étudiants formant un binôme doivent appartenir au même groupe de TD.  
- Les  différents  binômes  devront  remettre  un  seul  fichier NomPrenom1NomPrenom2.zip contenant les codes sources ainsi qu’un rapport électronique (pdf) de quelques pages.  
- Il est demandé de déposer un seul livrable par binôme pour faciliter les corrections. 
- Les noms des fichiers et les prototypes des fonctions doivent être respectés 
  - nous utilisons des scripts pour lancer et tester vos codes.  
- Un rapport détaillant le devoir doit être rédigé. 
- Le dernier délai pour la remise des TP est fixé pour le 18 décembre 2023. 

Exercice 1 : 

1/ Soit l’instruction C suivante :   

fork() && ( fork() || fork() ) ;  

Dites combien de processus seront crées suite à l’exécution de l’instruction C précédente et justifiez votre réponse.  

2/ Donner l’arbre généalogique des processus crées par l’instruction C précédente.  

3/ Créer un fichier zombie.c dans lequel un processus enfant sera créé et se mettra en sommeil pendant une minute. Le processus enfant, lui, affiche un message et exécute l’appel système.  

Exercice 2 : 

Dans cet exercice l’objectif est de faire communiquer un processus fils avec son processus père. Le processus fils doit écrire un entier dans un fichier, puis le processus père doit récupèrer cet entier en le lisant dans le fichier.   

1/ Écrire la fonction void ecrire\_fils(int nb, char\* name) qui écrit l’entier  

nb dans le fichier de nom name. Il faut donc ouvrir le fichier, écrire l’entier et fermer le fichier.   

2/ Ecrire la fonction lire\_pere(int\* nb, char\* name) qui lit un entier dans le  fichier name et met le résultat dans la variable nb, puis ferme le fichier name .   

3/ Modifier la fonction lire\_pere pour détruire le fichier une fois que la valeur contenue dans le fichier a été récupérée.   

4/ Écrire le programme principal de ce problème.  

5/ Modifier le programme précédent en utilisant cette fois-ci le mécanisme de signaux, de façon à ce que le deuxième fils écrive un entier nb2 dans le fichier name2, ensuite le premier fils écrive un entier nb1 dans le fichier name1. Puis le père lit les valeurs nb1 et nb2 écrites par ses fils. 

Exercice 3 : 

L’intérêt d’une exécution en parallèle est de diviser une grosse tâche en plusieurs petites tâches. Dans cette partie nous allons réaliser un programme qui cherche l’élément maximum d’un très grand tableau en utilisant plusieurs processus.   

Au départ on dispose d’un tableau de grande taille. Le processus va créer deux fils : le premier fils va chercher l’élément maximum des éléments compris dans la première moitié du tableau ; le deuxième fils va chercher l’élément maximum des éléments compris dans la deuxième moitié du tableau. A leur tour, chaque fils peut diviser sa tâche en deux parties en créant deux fils. Quand un processus doit chercher le maximum dans un tableau de moins de seuil éléments, il effectue une recherche séquentielle.   

Les processus fils communiquent le résultat de leur recherche à leur père en utilisant les fonctions ecrire\_fils et lire\_pere définit dans l’exercice précédent. Vous n’avez pas besoin de réécrire ces fonctions.   

1/ Ecrire la fonction int maxi(int i, int j) qui retourne le maximum des deux entiers i et j.   

2/ Ecrire la fonction int max(int\* tab, int debut, int fin) qui retourne le maximum des éléments du tableau tab compris entre les indices debut et fin.   

3/ Créer un programme qui aide à trouver l’élément maximum d’un tableau en suivant la procédure décrite dans l’introduction de l’exercice 3.   
3  
