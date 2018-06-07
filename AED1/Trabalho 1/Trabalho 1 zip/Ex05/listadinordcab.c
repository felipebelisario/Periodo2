#include <stdio.h>
#include <stdlib.h>
#include "listadinordcab.h"

struct no{

int info;
struct no * prox;

};

Lista cria_lista() {

Lista cab;
cab = (Lista) malloc(sizeof(struct no));

if (cab != NULL) { 

cab->prox = NULL;
cab->info = 0; } 

return cab;
}

int lista_vazia(Lista lst) {

if (lst->prox== NULL)
return 1; 
// Lista vazia
else
return 0; 
// Lista NÃO vazia

}

void print_lista(Lista lst){

Lista aux;
aux = lst->prox;
printf("{");
while(aux!=NULL){
printf(" %d ",aux->info);
aux = aux->prox;

}
printf("}");

}

int insere_ord(Lista *lst, int elem) {

Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

Lista aux = *lst; 

while (aux->prox != NULL && aux->prox->info < elem)
aux = aux->prox; 

N->prox = aux->prox;
aux->prox = N;
(*lst)->info++;

return 1;  
}


int remove_ord (Lista *lst, int elem) {

if (lista_vazia(*lst) == 1)
return 0; 

Lista aux = *lst;

while (aux->prox != NULL && aux->prox->info < elem)
aux = aux->prox;

if (aux->prox == NULL || aux->prox->info > elem)
return 0; 

Lista aux2 = aux->prox; 
aux->prox = aux2->prox; 
free(aux2); 
(*lst)->info--;

return 1; 

}

Lista intercala_ord(Lista lst1, Lista lst2){

Lista lst3;
lst3 = cria_lista();
int elem;

lst1 = lst1->prox;
lst2 = lst2->prox;

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


Lista aux2 = (*lst)->prox;
while (aux2 != NULL){


if(aux2->info%2!=0){remove_ord(&(*lst),aux2->info);}
aux2 = aux2->prox;

}
return 1;

}

int menor(Lista lst){

if(lista_vazia(lst)==1) return NULL;

Lista aux = lst;
int menor;

menor = lst->prox->info;
while (aux->prox != NULL){

aux = aux->prox;
if(aux->info<=menor) menor = aux->info;

}
return menor;
}

int tamanho(Lista lst){

return lst->info;

}

int iguais(Lista lst,Lista lst2){

if(lista_vazia(lst)==1 && lista_vazia(lst2)==1) return 1;

int cont=0;
Lista aux = lst->prox;
Lista aux2 = lst2->prox;

if(tamanho(lst)!=tamanho(lst2)) return 0;

while(aux != NULL){
if(aux->info!=aux2->info)break;
aux = aux->prox;
aux2 = aux2->prox;
}
if(aux==NULL){return 1;}
  else{return 0;}
}