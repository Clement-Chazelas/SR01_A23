# SR01 - TD 3

## Tableaux, pointeurs, expressions et opérateurs

Ce TD est à réaliser dans le répertoire td3.  

## Exercice1: tableaux et pointeurs, fichiers ex1a.c  ex1b.c  

soit les déclarations suivantes des tableaux tab1, tab2, tab3:  
          int tab1[MAX]={6,4,5,10,8,...};  
          int tab2[MAX]={7,8,...};  
          int tab3[MAX];  
Ecrire deux programmes ex1a.c et ex1b.c qui affectent à tab3  
la somme inverse de tab1 et tab2 : c.à.d    tab3[i] = tab1[i]  +  tab2[(MAX-1)-i]  
ex1a.c  manipule les tableaux à travers des indices,  
ex1b.c  manupile les tableaux à travers des pointeurs p1, p2 et p3.  


## Exercice2: tableau de chaines de caractères,  fichiers ex2.c  

Déclarer la structure de données suivantes pour les jours de la semaine :  
          char  *jour[7]={"lundi", "mardi", ...,"dimanche"};  
Eccrire un programme qui demande à l'utilisateur l'indice du premier jour du mois courant (par
exemple 2 si c'est un mercredi), et puis le programme demande à l'utilisateur la date , et donne
en resultat le jour correpondant:  
Exemple d'execution:  
>Donner l'indice du premier jour du mois:   4    /*un vendredi*/  
>Donner la date :  27  
> le 27 est un mercredi  


## Exercice3: printf() et sacnf() ex3a.c  et ex3b.c  

Copier, compiler et executer ces deux programmes. Tester ensuite, en modifiant les formats, d'autres
possibilités d'entrée/sortie avec printf() et scanf():  

/*ex3a.c: formats d'affichage avec printf()*/  
#include<stdio.h>  

int main()  
{  
  int i = 456;  
  long int  l = 123123123L;  
  unsigned int ui = 45645U;  
  unsigned long int  ul = 2123123123UL;  
  double  d = 123.45;  
  long double  ld = 9.87e35;  

  printf("Affichage en décimal :\n");  
  printf("   i = %d\n",    i);  
  printf("   l = %ld\n",   l);  
  printf("  ui = %u\n",   ui);  
  printf("  ul = %lu\n\n",  ul);  

  printf("Affichage en octal :\n");  
  printf("  ui = %o\n",    ui);  
  printf("  ul = %lo\n\n", ul);  

  printf("Affichage en hexadécimal :\n");  
  printf("  ui = %X\n",    ui);  
  printf("  ul = %lX\n\n", ul);  

  printf("Affichage du signe :\n");  
  printf("|%d|  |%+d|  |%d| \n",  -123,  -123, -123);  
  printf("|%d|  |%+d|  |%d| \n\n",  123,  123, 123);  

  printf("Affichage en octal et en hexadécimal :\n");  
  printf("|%x|  |%#x|  \n",  123,  123);  
  printf("|%X|  |%#X|  \n",  123,  123);  
  printf("|%o|  |%#o|  \n",  123,  123);  

  printf("Affichage avec spécification de la largeur \n");  
  printf("du champs d'impression et du nombre de digits :\n");  
  printf("|%.4d| \n",  123);  
  printf("|%+.4d| \n",  123);  
  printf("|%#.4X| \n\n",  123);  

  printf("|%5d|  |%-5d| \n",  123, 123);  
  printf("|%+5d|  |%+-5d| \n",  123, 123);  
  printf("|%#5X|  |%#-5X| \n\n",  123, 123);  

  printf("|%+6.4d| \n",  123);  
  printf("|%6.4o| \n",  123);  
  printf("|%#6.4X| \n\n",  123);  

  printf("Affichage de nombres avec virgulr flottante :\n");  
  printf("|%f| \n", 3.14157);  
  printf("|%.3f| \n", 3.14157);  
  printf("|%.0f| \n", 3.14157);  
  printf("|%#.0f| \n\n", 3.14157);  

  printf("|%E| \n",      1.23456e123);  
  printf("|%.3E| \n",    1.23456e123);  
  printf("|%.0E| \n",    1.23456e123);  
  printf("|%#.0E| \n\n", 1.23456e123);  

  printf("|%f|\t|%G| \n", 3.1, 3.1);  
  printf("|%E|\t|%G| \n", 3.1e10, 3.1e10);  

  printf("|%G|\t|%G| \n",  -0.0001,  0.00001);  
  printf("|%G|\t|%G| \n", 3.1e5, 3.1e6);  
  printf("|%.11G|\t|%.11G| \n", 3.1e10, 3.1e11);  
}  


               

                      /*ex3b.c: Lecture de données avec sacnf()*/  

#include<stdio.h>  

int main()  
{  
  int i1, i2, i3;  
  float r1, r2, r3;  
  char c1, c2, c3;  
  char s1[10], s2[10], s3[10];  
  char s4[4], s5[4], s6[4];  

  printf("Entrez trois nombres décimaux :  ");  
  scanf("%d%d%d",&i1, &i2, &i3);  
  printf("Vous avez entré : %d\t%d\t%d\n", i1, i2, i3);  

  printf("Entrez trois nombres décimaux :  ");  
  scanf("%4f%4f%4f",&r1, &r2, &r3);  
  printf("Vous avez entré : %f\t%f\t%f\n", r1, r2, r3);  

  /* Lecture des chaines de caractères */  
 
  printf("Entrez du texte :  ");  
  scanf("%s%s%s",s1, s2, s3);  
  printf("s1=|%s|\ts2=|%s|\ts3=|%s| \n", s1, s2, s3);  
  scanf("%c%c%c",&c1, &c2, &c3);  
  printf("c1='%c'\tc2='%c'\tc3='%c' \n", c1, c2, c3);  

  printf("Entrez du texte :  ");  
  scanf("%4c%4c%4c",s4, s5, s6);  
  printf("s4=|%.4s|\ts5=|%.4s|\ts6=|%.4s| \n", s4, s5, s6);  
}  


## Exercice4: Expressions et conversions  

En se basant sur le tableau de priorité des opérateurs,
Essayer de trouver le résultat des printf(), avant de compiler et d'executer les programmes ci-dessous.  


  int main(void)  
  {  
    int x = 10;  
    int y, z;  
    x *= y = z = 4;  
    printf("x = %d \n",x);             
  }  


  int main(void)  
  {  
    int x, y, z;  
    x = 2; y = 1; z = 0;  
    x = x && y || z;    
    printf("x = %d \n",x);  
  }  


  int main(void)  
  {  
    int x = 2, y = 1, z = 0;  
    z += -x++ + ++y;    
    printf("x=%d  y=%d  z=%d  \n",x, y, z);    
  }  


  int main(void)  
  {  
    int x = 3, z = 0;           
    z = x / ++x;           
    printf("x=%d    z=%d  \n",x, z);   
  }  


  int main(void)  
  {  
    int x = 03, y = 02, z = 01;  
    int a, b;  

    a = x | y & ~z;             
    b = x ^ y & ~z;           
    printf("a=%d  b=%d \n", a, b);   
   }  

  int main(void)  
  {  
    int x = 01, y = -01;  
    int a;  
    a = ~x | x;                
    y <<= 3;  
    printf("a=%d  y=%d \n", a, y);  
      }  
 


  int main(void)  
  {  
    int x = 3, y = 2;  
    int a;  
    a = x < y ? x++ : y++;  
    printf("x=%d  y=%d a=%d \n", x, y, a);    
  }  


  int main(void)  
  {  
    int x = -1, y = -1, z = -1;  
    int a;  
    a = ++x && ++y || ++z;      
    printf("y=%d  a=%d \n", y, a);  
  }  

