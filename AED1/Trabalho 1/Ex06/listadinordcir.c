#include <stdio.h>
#include <stdlib.h>
#include "listadinordcir.h"

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

int print_lista(Lista lst){

if (lista_vazia(lst) == 1) {printf("{}");return 0;}
Lista aux;
aux = lst->prox;
if(aux->prox==aux){printf("{ %d }",aux->info);return 1;}
printf("{");

while(aux->prox!=lst->prox){
printf(" %d ",aux->info);
aux = aux->prox;

}
printf(" %d ",aux->info);
printf("}");

return 1;

}

int insere_elem(Lista *lst, int elem) {


Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

if (lista_vazia(*lst) == 1) {
N->prox = N; 

*lst = N; 

}

else {
N->prox = (*lst)->prox; 

(*lst)->prox = N; 

*lst = N; 

}
return 1;
}

int remove_elem (Lista *lst, int *elem) {


if (lista_vazia(*lst) == 1)
return 0;
Lista aux = (*lst)->prox; 

*elem = aux->info; 

if (*lst == (*lst)->prox) 

*lst = NULL;
else 

(*lst)->prox = aux->prox;
free(aux);
return 1;
}

int tamanho(Lista lst){

if(lst==NULL)return NULL;

int cont=0;
Lista aux = lst->prox;

cont++;

while(aux->prox!=lst->prox){
aux = aux->prox;
cont++;
}
return cont;
}

int insere_inicio(Lista *lst, int elem){

Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

if (lista_vazia(*lst) == 1) {
N->prox = N; 

*lst = N; 

}

else {
N->prox = (*lst)->prox; 
(*lst)->prox = N; 

}
return 1;


}

int insere_posicao(Lista *lst, int elem, int pos){

Lista aux = *lst;
int i;

Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

if(pos>tamanho((*lst))+1 || pos<1) return 0;
if(pos==tamanho((*lst))+1) {insere_elem(&(*lst),elem); return 1;}

if (lista_vazia(*lst) == 1 && pos==1) {
N->prox = N; 
*lst = N; 

}

else {

for(i=1;i<=pos-1;i++){

aux = aux->prox;

}

N->prox = aux->prox; 
aux->prox = N; 

}
return 1;

}

int remove_posicao(Lista *lst, int pos, int *elem){

Lista aux = *lst;
Lista aux2 = *lst;
int i;

if(pos>tamanho((*lst)) || pos<1) return 0;
if (tamanho(*lst)==1 && pos==1) {remove_elem(&(*lst),&(*elem)); return NULL;}
if(pos==tamanho((*lst))) {
while(aux2->prox!=*lst)
aux2 = aux2->prox;

*elem = aux2->prox->info;
*lst = aux2;
aux2 = aux2->prox;
(*lst)->prox = aux2->prox;
free(aux2);

return 1;}

if (lista_vazia(*lst) == 1) {
return NULL;
}

else {

for(i=1;i<=pos-1;i++){

aux = aux->prox;

}
*elem = aux->prox->info;
Lista aux2 = aux->prox;

aux->prox = aux2->prox; 
free(aux2);

}
return 1;

}

int maior(Lista lst){

Lista aux = lst->prox->prox;
int maior;

if (lista_vazia(lst) == 1) {
return NULL;
}

maior = lst->prox->info;

while(aux != lst){

if(aux->info>=maior) maior = aux->info;
aux = aux->prox;
}
if(lst->info>=maior) maior = lst->info;

return maior;

}
