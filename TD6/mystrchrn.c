#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrchrn(char *s, char c)
{
    int nb_occu = 0;
    for(int i=0;i<strlen(s);i++){
        if(*s == c){
            nb_occu++;
        }
    }
    return nb_occu;
}
