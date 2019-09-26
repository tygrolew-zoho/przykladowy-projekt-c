#include "fun.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char tekst[10];
    char *t;	
	
    t = (char *) hello(tekst);
    printf("%X %s\n", tekst, tekst);
    printf("%X %s\n\n", t, t);
	
    return 0;
}
// gcc main.c fun.c