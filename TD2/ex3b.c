#include <stdio.h>
#include <stdlib.h>

struct complexe {
    float  x;
    float  y;
};
typedef struct complexe complexe;

complexe *Somme(complexe *a, complexe *b)
{
    complexe *c = NULL;
    c->x = a->x + b->x;
    c->y = a->y + b->y;
    return c;
}

complexe *Produit(complex *a, complexe *b)
{
    complexe *c = NULL;
    c->x = a->x * b->x;
    c->y = a->y * b->y;
    return c;
}


void main()
{

}
