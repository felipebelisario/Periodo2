#include <stdio.h>
#include "filaest.h"

int main(){

int i,n,qnt;
char op;
Fila f;
f = cria_fila();
printf("Fila criada: ");
print_fila(f);

printf("\n\nDeseja inserir quantos elementos na fila (MAX = 20)? ");
scanf("%d",&qnt);
if(qnt>20){printf("Não há espaco suficiente na lista para essa quantidade\n"); return 0;}

for(i=0;i<qnt;i++){
printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_fim(f,n);

}

setbuf(stdin,NULL);
printf("\nDeseja remover o elemento do topo? (Y=Sim e N=NAO) ");
scanf("%c",&op);
if(op=='y' || op=='Y') {remove_ini(f,&n);
printf("\nFila:");
print_fila(f);
printf("Elemento removido: %d\n\n",n);}
else { printf("\nFila:");
print_fila(f);}

f = cria_fila();
printf("Fila resetada: ");
print_fila(f);
printf("\n\n");
}