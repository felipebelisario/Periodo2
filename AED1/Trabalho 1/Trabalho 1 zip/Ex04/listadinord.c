#include <stdio.h>
#include <stdlib.h>
#include "listadinord.h"

struct no{

int info;
struct no * prox;

};

Lista cria_lista() {
return NULL;
}

int lista_vazia(Lista lst) {

if (lst == NULL)
return 1; 
// Lista vazia
else
return 0; 
// Lista NÃO vazia

}

void print_lista(Lista lst){

Lista aux;
aux = lst;
printf("{");
while(aux!=NULL){
printf(" %d ",aux->info);
aux = aux->prox;

}
printf("}");

}

int insere_ord(Lista *lst, int elem) {

// Aloca um novo nó
Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 
// Falha: nó não alocado
N->info = elem; 
// Insere o conteúdo (valor do elem)
if (lista_vazia(*lst) || elem <= (*lst)->info) {
N->prox = *lst; 
// Aponta para o primeiro nó atual da lista
*lst = N; 
// Faz a lista apontar para o novo nó
return 1;  
}

// Percorrimento da lista (elem > primeiro nó da lista)
Lista aux = *lst; 
// Faz aux apontar para primeiro nó
while (aux->prox != NULL && aux->prox->info < elem)
aux = aux->prox; 
// Avança
// Insere o novo elemento na lista
N->prox = aux->prox;
aux->prox = N;
return 1;  

}

int remove_ord (Lista *lst, int elem) {

if (lista_vazia(*lst) == 1 || elem < (*lst)->info)
return 0; 
// Falha
Lista aux = *lst; 
// Ponteiro auxiliar para o primeiro nó
if (elem == (*lst)->info) 
{
// Remove elemento primeiro nó da lista
*lst = aux->prox; 
// Lista aponta para o segundo nó
free(aux); 
// Libera memória alocada
return 1; 
}
// Percorrimento até final de lista ou achar elem ou nó maior
while (aux->prox != NULL && aux->prox->info < elem)
aux = aux->prox;
if (aux->prox == NULL || aux->prox->info > elem)
return 0; 
// Falha
// Remove elemento (após o primeiro nó da lista)
Lista aux2 = aux->prox; 
// Aponta nó a ser removido
aux->prox = aux2->prox; 
// Retira nó da lista
free(aux2); 
// Libera memória alocada
return 1;
}

Lista intercala_ord(Lista lst1, Lista lst2){

Lista lst3;
lst3 = cria_lista();
int elem;

while (lst1 != NULL){
elem = lst1->info;
insere_ord(&lst3,elem);
lst1 = lst1->prox;

}

while (lst2 != NULL){
elem = lst2->info;
insere_ord(&lst3,elem);
lst2 = lst2->prox;

}

return lst3;
}

int remove_impares(Lista *lst){

if(lista_vazia(*lst)==1){
return NULL;
}


Lista aux2 = *lst;
while (aux2 != NULL){


if(aux2->info%2!=0){remove_ord(&(*lst),aux2->info);}
aux2 = aux2->prox;

}
return 1;
}

int menor(Lista lst){

if(lista_vazia(lst)==1) return NULL;

return lst->info;

}

int tamanho(Lista lst){

if(lista_vazia(lst)==1) return NULL;

int cont = 1;
Lista aux = lst;

while (aux->prox != NULL){
cont++;
aux = aux->prox;
}

return cont;

}

int iguais(Lista lst,Lista lst2){

if(lista_vazia(lst)==1 && lista_vazia(lst2)==1) return 1;

int cont=0;
Lista aux = lst;
Lista aux2 = lst2;

if(tamanho(lst)!=tamanho(lst2)) return 0;

while(aux != NULL){
if(aux->info!=aux2->info)break;
aux = aux->prox;
aux2 = aux2->prox;
}
if(aux==NULL){return 1;}
  else{return 0;}
}