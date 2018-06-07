#include <stdio.h>
#include <stdlib.h>
#include "listadinordcir.h"

int main(){

Lista lsta;
int qnt, i, n, pos, elem;
char op;

lsta = cria_lista();
printf("Lista criada: ");
print_lista(lsta);
printf("\n");

printf("Deseja inserir quantos numeros no final da lista? ");
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

printf("\nDeseja inserir quantos numeros no inicio da lista? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_inicio(&lsta, n);

}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

printf("\nDeseja inserir um numero em qual posicao? ");
scanf("%d", &pos);
printf("Digite o numero que deseja inserir: ");
scanf("%d",&n);
insere_posicao(&lsta, n, pos);

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

printf("\nDeseja remover o elemento de qual posicao? ");
scanf("%d", &pos);
remove_posicao(&lsta, pos, &elem);
printf("\nLista modificada: ");
print_lista(lsta);
printf("\nElemento removido: %d",elem);

printf("\n\n");
printf("---------------------------------\n\n");

n = tamanho(lsta);
printf("Tamanho: %d",n);

printf("\n\n");
printf("---------------------------------\n\n");

setbuf(stdin,NULL);
printf("Deseja remover o elemento do inicio lista? (Y=SIM,N=NÃO) ");
scanf("%c", &op);
if(op=='y' || op=='Y'){
if(lista_vazia(lsta)==1){printf("A lista esta vazia.\n");}
  else{remove_elem(&lsta, &n);}

printf("\nLista modificada: ");
print_lista(lsta);
printf("\nElemento removido: %d",n);}
else{printf("\nLista modificada: ");
print_lista(lsta);
printf("\nElemento removido: nenhum");}

printf("\n\n");
printf("---------------------------------\n\n");

free(lsta);
lsta = cria_lista();
printf("A lista foi resetada: \n");
printf("Lista: ");
print_lista(lsta);
printf("\n");

}