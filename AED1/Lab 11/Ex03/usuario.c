#include <stdio.h>
#include "filadin.h"

int main(){

int i,n,qnt;
char op;
Fila f;
f = cria_fila();
printf("Fila criada: ");
print_fila(f);

printf("\n\nDeseja inserir quantos elementos na fila? ");
scanf("%d",&qnt);

for(i=0;i<qnt;i++){
printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_fim(&f,n);

}

setbuf(stdin,NULL);
printf("\nDeseja remover o elemento do topo? (Y=Sim e N=NAO) ");
scanf("%c",&op);
if(op=='y' || op=='Y'){ remove_ini(&f,&n);
printf("\nFila:");
print_fila(f);
printf("\nElemento removido: %d\n\n",n);}
else {printf("\nFila:");
print_fila(f);
printf("\n\n");
}

f = cria_fila();
printf("Fila resetada: ");
print_fila(f);
printf("\n\n");
}