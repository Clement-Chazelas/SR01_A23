#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrncpy(char *s1, char *s2, int n)
{
    for(int i=n;i<strlen(s1);i++){
        s2[i] = s1[strlen(s1)-i-1];
    }
    s2[strlen(s1)] = '\0';
}
