#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
