#include "fun.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void)
{
    char tekst[10];
    hello(tekst);
    printf("%X %s\n", tekst, tekst);
    assert(strlen(tekst)==6); // Assertion failed: strlen(tekst)==6, file test.c, line 11
    assert(strcmp(tekst,"Hello")>0);
    return 0;
}
