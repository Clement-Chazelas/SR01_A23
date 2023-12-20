#include <stdio.h>
#include <stdlib.h>


/*Affiche x fois z, donc 40
int main(void)
{
    int x = 10;
    int y, z;
    x *= y = z = 4;
    printf("x = %d \n",x);
}


Affiche 1 car x && y || z est équivalent à (x && y) || z ce qui donne 1 || z donc 1
int main(void)
{
    int x, y, z;
    x = 2; y = 1; z = 0;
    x = x && y || z;
    printf("x = %d \n",x);
}


Affiche x = 3 y = 2 et z = 0, puisque z+= -x++ + ++y <=> z = z -x + (y+1), l'incrémentation de x se fera après l'affectation , c'est pourquoi on a x = 3
int main(void)
{
    int x = 2, y = 1, z = 0;
    z += -x++ + ++y;
    printf("x=%d  y=%d  z=%d  \n",x, y, z);
}


Affiche z=1 et x=4 on a z = 3/4, comme c'est un int on arrondit à 1 et oon a ++x d'ou x = 4
int main(void)
{
    int x = 3, z = 0;
    z = x / ++x;
    printf("x=%d    z=%d  \n",x, z);
}
*/

/*Affiche a = 3 et b = 1, en effet voici les étapes suivies par le programme

x | (y & ~z) :

x en binaire = 0011
y en binaire = 0010
z en binaire = 0001
Le complément de z = 1110
On a donc y & ~z = 0010
D'ou y & ~z <=> 0010 & 1110 = 0010 en binaire, soit 2 en décimal
Donc, x | (y & ~z) <=> 0011 | 0010 = 0011, soit 3 en décimal

x ^ (y & ~z) :

y & ~z = 0010
D'ou x ^ (y & ~z) <=> 0011 ^ 0010 = 0001, soit 1 en décimal


int main(void)
{
    int x = 03, y = 02, z = 01;
    int a, b;

    a = x | y & ~z;
    b = x ^ y & ~z;
    printf("a=%d  b=%d \n", a, b);
}
*/

//Affiche
int main(void)
{
    int x = 01, y = -01;
    int a;
    a = ~x | x;
    y <<= 3;
    printf("a=%d  y=%d \n", a, y);
}


/*
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

*/
