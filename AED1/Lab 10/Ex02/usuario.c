#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhadinp.h"
#define MAX 30

int main(){

int qnt,n,i;
char s[MAX];

setbuf(stdin,NULL);
printf("Digite uma expressão: ");
scanf("%s",&s[0]);

n = validade(s);

if(n==1) printf("\nA expressao eh valida!\n");
if(n==0) printf("\nA expressao nao eh valida!\n");

return 1;

}