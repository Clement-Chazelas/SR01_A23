#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystr.h"


void mystrupdown(char *s1, char *s2)
{
    while (*s1) {
        if (*s1 >= 'a' && *s1 <= 'z') {
            *s2 = *s1 - 32;
        } else if (*s1 >= 'A' && *s1 <= 'Z') {
            *s2 = *s1 + 32;
        } else {
            *s2 = *s1;
        }
        s1++;
        s2++;
    }
    *s2 = '\0';
}

void mystrinv(char *s1, char *s2)
{
    for(int i=0;i<strlen(s1);i++){
        s2[i]=s1[strlen(s1)-i-1];
    }
    s2[strlen(s1)] = '\0';
}

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

void mystrncpy(char *s1, char *s2, int n)
{
    for(int i=n;i<strlen(s1);i++){
        s2[i] = s1[strlen(s1)-i-1];
    }
    s2[strlen(s1)] = '\0';
}

void mystrncat(char *s1, char *s2, int n)
{
    for(int i=n;i<strlen(s1);i++){
        s2[strlen(s2)+i-n] = s1[strlen(s1)-i-1];
    }
    s2[strlen(s2)] = '\0';
}
