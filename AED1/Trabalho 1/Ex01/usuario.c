#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

Lista lsta,lsta2,lsta_par,lsta_con;
int qnt, i, n, menor_elem,tamanho_lista;

lsta = cria_lista();
lsta_par = cria_lista();
lsta2 = cria_lista();
lsta_con = cria_lista();

printf("Lista 1 criada: ");
print_lista(lsta);
printf("\n");
printf("Lista 2 criada: ");
print_lista(lsta2);
printf("\n\n");

if(lista_cheia(lsta)==1){printf("A lista esta cheia."); return 0;}


printf("Deseja inserir quantos numeros na lista 1?(MAX=30) ");
scanf("%d", &qnt);
if(qnt>30){printf("Não há espaco suficiente na lista para essa quantidade\n");return 0;}

for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);

if(lista_cheia(lsta)==1){printf("A lista 1 esta cheia.\n"); return 0;}
  else{insere_elem(lsta, n);}

}

printf("\nLista 1 modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");
if(lista_vazia(lsta)==1||lsta==NULL){printf("A lista esta vazia, nao ha calculos para se fazer.\n\n");return 0;}

printf("Deseja remover qual elemento da lista 1? ");
scanf("%d", &n);
if(lista_vazia(lsta)==1){printf("A lista 1 esta vazia.\n"); return 0;}
  else{remove_todos(lsta, n);}

printf("\nLista 1 modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

menor_elem = menor(lsta);
printf("Menor elemento da lista 1: %d",menor_elem);

printf("\n\n");
printf("---------------------------------\n\n");

lsta_par = remove_impares(lsta);
printf("Lista 1 sem os numeros impares: ");
print_lista(lsta_par);

printf("\n\n");
printf("---------------------------------\n\n");


if(lista_cheia(lsta2)==1){printf("A lista 2 esta cheia."); return 0;}

printf("Deseja inserir quantos numeros na lista 2?(MAX=30) ");
scanf("%d", &qnt);
if(qnt==0){printf("A lista 1 esta vazia\nLista 2 modificada: ");print_lista(lsta2);}
else{if(qnt>30){printf("Não há espaco suficiente na lista para essa quantidade\n");return 0;}

for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);

if(lista_cheia(lsta2)==1){printf("A lista 2 esta cheia.\n"); return 0;}
  else{insere_elem(lsta2, n);}

}

printf("\nLista 2 modificada: ");
print_lista(lsta2);}
printf("\n\n");
printf("---------------------------------\n\n");

lsta_con = concatena(lsta,lsta2);
printf("Lista concatenada: ");
print_lista(lsta_con);

printf("\n\n");
printf("---------------------------------\n\n");

tamanho_lista = tamanho(lsta_con);
printf("Tamanho da lista apos concatenacao: %d",tamanho_lista);

printf("\n\n");
printf("---------------------------------\n\n");

if(lsta2!=NULL && lsta!=NULL){free(lsta_con);}
free(lsta);
free(lsta2);
free(lsta_par);
lsta = cria_lista();
lsta2 = cria_lista();
printf("As listas foram resetadas: \n");
printf("Lista 1: ");
print_lista(lsta);
printf("\n");
printf("Lista 2: ");
print_lista(lsta2);
printf("\n\n");

return 0;

}