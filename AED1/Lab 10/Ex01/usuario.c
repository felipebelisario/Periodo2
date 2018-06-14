#include <stdio.h>
#include <stdlib.h>
#include "pilha_bin.h"

int main(){

Pilha p;
int qnt,n;

p = cria_pilha();

for(;;){
printf("Digite um numero natural: ");
scanf("%d",&qnt);
if(qnt>=0) break;
}

p = dec_bin(qnt);

printf("\nNumero %d em binario:",qnt);
print_pilha(p);
printf("\n\n");

return 0;

}