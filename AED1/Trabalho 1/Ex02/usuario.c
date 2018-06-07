#include <stdio.h>
#include <stdlib.h>
#include "listaord.h"

int main(){

Lista lsta, lsta2, lsta_imp, lst3;
int qnt, i, n, maior_elem,tamanho_lista;
lst3 = cria_lista();
lsta = cria_lista();
lsta2 = cria_lista();
lsta_imp = cria_lista();
printf("Lista 1 criada: ");
print_lista(lsta);
printf("\n");
printf("Lista 2 criada: ");
print_lista(lsta2);
printf("\n\n");

if(lista_cheia(lsta)==1){printf("A lista esta cheia."); return 0;}

printf("Deseja inserir quantos numeros na lista 1?(MAX=30) ");
scanf("%d", &qnt);
if(qnt>30){printf("Não há espaco suficiente na lista 1 para essa quantidade\n");return 0;}

for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);

if(lista_cheia(lsta)==1){printf("A lista 1 esta cheia.\n"); return 0;}
  else{insere_ord(lsta, n);}

}

printf("\nLista 1 modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");
if(lista_vazia(lsta)==1||lsta==NULL){printf("A lista esta vazia, nao ha calculos para se fazer.\n\n");return 0;}
printf("Deseja remover qual elemento da lista 1? ");
scanf("%d", &n);
if(lista_vazia(lsta)==1){printf("A lista 1 esta vazia.\n"); return 0;}
  else{remove_ord(lsta, n);}

printf("\nLista 1 modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

lsta_imp = remove_pares(lsta);
printf("Lista 1 sem os numeros pares: ");
print_lista(lsta_imp);

printf("\n\n");
printf("---------------------------------\n\n");

maior_elem = maior(lsta);
printf("Maior elemento da lista 1: %d",maior_elem);

printf("\n\n");
printf("---------------------------------\n\n");

tamanho_lista = tamanho(lsta);
printf("Tamanho da lista 1: %d",tamanho_lista);

printf("\n\n");
printf("---------------------------------\n\n");

if(lista_cheia(lsta2)==1){printf("A lista 1 esta cheia."); return 0;}

printf("Deseja inserir quantos numeros na lista 2?(MAX=10) ");
scanf("%d", &qnt);
if(qnt==0){printf("A lista 2 esta vazia\nLista 2 modificada: ");print_lista(lsta2);}
else{if(qnt>30){printf("Não há espaco suficiente na lista para essa quantidade\n");return 0;}

for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);

if(lista_cheia(lsta2)==1){printf("A lista 2 esta cheia.\n"); return 0;}
  else{insere_ord(lsta2, n);}

}

lst3 = intercala(lsta,lsta2);
printf("Lista intercalada: ");
print_lista(lst3);

printf("\n\n");
printf("---------------------------------\n\n");

printf("\nLista 2 modificada: ");
print_lista(lsta2);}

printf("\n\n");
printf("---------------------------------\n\n");

n = iguais(lsta,lsta2);
if(n==1){printf("As listas sao iguais.");}
if(n==0){printf("As listas nao sao iguais.");}

printf("\n\n");
printf("---------------------------------\n\n");

if(lsta!=lsta_imp)free(lsta_imp);
free(lsta);
free(lsta2);
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