#include <stdio.h>
#include <stdlib.h>
#include "listadinordcab.h"

int main(){

Lista lsta, lsta2,lsta3;
int qnt, i, n;

lsta = cria_lista();
lsta2 = cria_lista();
lsta3 = cria_lista();
printf("Listas criadas: \n");
printf("Lista 1: ");
print_lista(lsta);
printf("\n");
printf("Lista 2: ");
print_lista(lsta2);
printf("\n\n");

printf("Deseja inserir quantos numeros na lista 1? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_ord(&lsta, n);

}

printf("\nLista 1 modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

printf("Deseja inserir quantos numeros na lista 2? ");
scanf("%d", &qnt);


for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_ord(&lsta2, n);

}

printf("\nLista 2 modificada: ");
print_lista(lsta2);

printf("\n\n");
printf("---------------------------------\n\n");

lsta3 = intercala_ord(lsta,lsta2);
printf("Lista intercalada: ");
print_lista(lsta3);

printf("\n\n");
printf("---------------------------------\n\n");

printf("Deseja remover qual elemento da lista? ");
scanf("%d", &n);
if(lista_vazia(lsta3)==1){printf("A lista esta vazia.\n");}
  else{remove_ord(&lsta3, n);}

printf("\nLista sem o elemento %d: ", n);
print_lista(lsta3);

printf("\n\n");
printf("---------------------------------\n\n");

n = menor(lsta3);
printf("Menor elemento: %d",n);

printf("\n\n");
printf("---------------------------------\n\n");

n = tamanho(lsta3);
printf("Tamanho: %d",n);

printf("\n\n");
printf("---------------------------------\n\n");

n = iguais(lsta,lsta2);
if(n==1){printf("As listas são iguais");}
else{printf("As listas não são iguais");}

printf("\n\n");
printf("---------------------------------\n\n");

remove_impares(&lsta3);
printf("Lista sem os numeros impares: ");
print_lista(lsta3);

free(lsta);
free(lsta2);
lsta = cria_lista();
lsta2 = cria_lista();
printf("\nAs listas foram resetadas: \n");
printf("Lista 1: ");
print_lista(lsta);
printf("\n");
printf("Lista 2: ");
print_lista(lsta2);
printf("\n");

}