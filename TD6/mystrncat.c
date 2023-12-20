#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystrncat(char *s1, char *s2, int n)
{
    for(int i=n;i<strlen(s1);i++){
        s2[strlen(s2)+i-n] = s1[strlen(s1)-i-1];
    }
    s2[strlen(s2)] = '\0';
}
