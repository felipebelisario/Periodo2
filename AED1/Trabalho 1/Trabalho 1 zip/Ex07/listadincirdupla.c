#include <stdio.h>
#include <stdlib.h>
#include "listadincirdupla.h"

struct no{

int info;
struct no * prox;
struct no * ant;

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

int print_lista(Lista lst){

if (lista_vazia(lst) == 1) {printf("{}");return 0;}
Lista aux;
aux = lst;

printf("{");

while(aux!=NULL){
printf(" %d ",aux->info);
aux = aux->prox;

}
printf("}");

return 1;

}

int insere_elem(Lista *lst, int elem) {

Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

N->ant = NULL; 

N->prox = *lst; 

if (lista_vazia(*lst) == 0) 
(*lst)->ant = N; 

*lst = N; 

return 1;
}

int remove_elem (Lista *lst, int elem) {

if (lista_vazia(*lst))
return 0;

Lista aux = *lst; 

while (aux->prox != NULL && aux->info != elem)
aux = aux->prox;
if (aux->info != elem) return 0; 

if (aux->prox != NULL) (aux)->prox->ant = aux->ant;
if (aux->ant != NULL) (aux)->ant->prox = aux->prox;
if (aux == *lst) *lst = aux->prox;
free(aux);
return 1;
}

int tamanho(Lista lst){

if(lst==NULL)return NULL;

int cont=0;
Lista aux = lst;

cont++;

while(aux->prox!=NULL){
aux = aux->prox;
cont++;
}
return cont;
}

int remove_maior(Lista *lst, int *elem){

Lista aux = (*lst)->prox;

if (lista_vazia(*lst) == 1) {
return NULL;
}

*elem = (*lst)->info;

while(aux != NULL){

if(aux->info>=*elem) *elem = aux->info;
aux = aux->prox;
}

remove_elem(&(*lst),*elem);

return 1;
}

int remove_todos (Lista *lst, int elem){

Lista aux = *lst;

if (lista_vazia(*lst) == 1) {
return NULL;
}

while(aux != NULL){

if(aux->info==elem){remove_elem(&(*lst),elem);}
aux = aux->prox;
}

return 1;

}

Lista multiplos_3(Lista lst){

Lista lsta;
lsta = cria_lista();
Lista aux = lst;

if (lista_vazia(lst) == 1) return NULL;

while(aux->prox != NULL){
aux = aux->prox;
}
while(aux != NULL){
if(aux->info%3==0){insere_elem(&lsta,aux->info);}
aux = aux->ant;
}
return lsta;
}