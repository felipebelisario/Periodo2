#include <stdio.h>
#include "funcoesDeBase.h"

void printbits8(unsigned int x)
{
    printf("%d = ", x);
    int i;
    for(i = 7; i >= 0; i--)
        printf("%c", '0' + ((x >> i) & 1));
    printf("\n");
}
void printbitsFloat(float x)
{
    int i;
    for(i = 31; i >= 0; i--)
        printf("%c", '0' + (((long int)x >> i) & 1));
    printf("\n");
}
