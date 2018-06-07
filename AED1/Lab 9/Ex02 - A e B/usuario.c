#include <stdio.h>
#include <stdlib.h>
#include "pilhadin.h"

int main(){

Pilha p;
int qnt,n,i;
char op;

p = cria_pilha();
printf("Pilha criada:");
print_pilha(p);
printf("\n");

printf("Deseja inserir quantos elementos na pilha? ");
scanf("%d",&qnt);

for(i=0;i<qnt;i++){
printf("Elemento %d: ",i+1);
scanf("%d",&n);
push(&p,n);

}

printf("\nPilha:\n\n");
print_pilha(p);
printf("\n");

setbuf(stdin,NULL);
printf("Deseja remover o elemento do topo? (Y=Sim e N=NAO) ");
scanf("%c",&op);
if(op=='y' || op=='Y') {pop(&p,&n); printf("Elemento removido: %d\n",n);}

printf("\nPilha modificada:\n\n");
print_pilha(p);
printf("\n");

p = cria_pilha();
printf("Pilha resetada:");
print_pilha(p);
printf("\n\n");

return 1;

}