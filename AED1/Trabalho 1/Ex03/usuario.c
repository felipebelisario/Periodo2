#include <stdio.h>
#include <stdlib.h>
#include "listadin.h"

int main(){

Lista lsta,lsta_imp, lsta2, lstacon;
int qnt, i, n;

lsta = cria_lista();
lsta_imp = cria_lista();
lsta2 = cria_lista();
lstacon = cria_lista();
printf("Lista criada: ");
print_lista(lsta);
printf("\n");

printf("Deseja inserir quantos numeros no inicio da lista? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_elem(&lsta, n);

}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

printf("Deseja remover qual elemento da lista? ");
scanf("%d", &n);
if(lista_vazia(lsta)==1){printf("A lista esta vazia.\n");}
  else{remove_todos(&lsta, n);}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");


printf("Deseja inserir quantos elementos no final da lista? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_final(&lsta, n);

}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");


remove_pares(&lsta);
printf("\nLista sem os numeros pares: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

n = maior(lsta);
printf("Maior elemento: %d",n);


printf("\n\n");
printf("---------------------------------\n\n");

n = tamanho(lsta);
printf("Tamanho da lista: %d",n);

printf("\n\n");
printf("---------------------------------\n\n");

printf("Deseja inserir quantos numeros no inicio da lista 2? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_elem(&lsta2, n);

}

printf("\nLista modificada: ");
print_lista(lsta2);

printf("\n\n");
printf("---------------------------------\n\n");

lstacon = concatena(lsta,lsta2);
printf("\nLista concatenada: ");
print_lista(lstacon);

free(lsta);
lsta = cria_lista();
printf("\nA lista foi resetada: \n");
printf("Lista: ");
print_lista(lsta);
printf("\n");

}