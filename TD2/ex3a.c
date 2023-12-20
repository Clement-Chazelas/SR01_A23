#include <stdio.h>
#include <stdlib.h>

struct complexe {
    float  x;
    float  y;
}complexe;
typedef struct complexe Complexe;

void Afficher(Complexe *a)
{
    if(a->y < 0){
        printf("%d%di",a->x,a->y);
    }
    if(a->y == 0){
        printf("%d",a->x);
    }
    printf("%d+%di",a->x,a->y);
}


void main()
{
    Complexe *a;
    a->x = 5;
    a->y = 1;

    Afficher(a);
}
