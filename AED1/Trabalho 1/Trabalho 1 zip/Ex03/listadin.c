#include <stdio.h>
#include <stdlib.h>
#include "listadin.h"

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

int insere_elem(Lista *lst, int elem) {


Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; } 

N->info = elem; 

N->prox = *lst; 

*lst = N; 

return 1;

}

int remove_elem (Lista *lst, int elem) {

if (lista_vazia(*lst) == 1)
return 0; 

Lista aux = *lst; 

if (elem == (*lst)->info) 
{
*lst = aux->prox; 

free(aux); 

return 1; 
}

while (aux->prox != NULL && aux->prox->info != elem)
aux = aux->prox;
if (aux->prox == NULL) 

return 0; 

Lista aux2 = aux->prox; 

aux->prox = aux2->prox; 

free(aux2); 

return 1;
}

int remove_todos (Lista *lst, int elem){

if (lista_vazia(*lst) == 1)
return 0; 

while (elem == (*lst)->info) 
{
Lista aux = *lst; 

if(aux->prox==NULL){*lst=NULL;break;}
*lst = aux->prox;

free(aux); 

}

if (lista_vazia(*lst) == 1)
return 0;

Lista aux3 = *lst; 
while (aux3->prox != NULL){

if(aux3->prox->info==elem){
Lista aux2 = aux3->prox; 

if(aux2->prox!=NULL){aux3->prox = aux2->prox;}
if(aux2->prox==NULL){aux3->prox=NULL;free(aux2);break;}

free(aux2);}
if(aux3->prox->info!=elem) {aux3 = aux3->prox;}
}
return 1;
}

int insere_final(Lista *lst, int elem){

Lista aux = *lst;
Lista N = (Lista) malloc(sizeof(struct no));
if (N == NULL) { return 0; }

if(lista_vazia(*lst)==1) {insere_elem(&(*lst),elem); return 1;}

while (aux->prox != NULL)
aux = aux->prox;

N->info = elem;
N->prox = aux->prox;
aux->prox = N;

return 1;
}

int remove_pares(Lista *lst){

if(lista_vazia(*lst)==1){
return NULL;
}

Lista aux2 = *lst;
while (aux2 != NULL){


if(aux2->info%2==0){remove_elem(&(*lst),aux2->info);}
aux2 = aux2->prox;


}
return 1;
}

int maior(Lista lst){

if(lista_vazia(lst)==1) return NULL;

Lista aux = lst;
int maior;

maior = lst->info;
while (aux->prox != NULL){

aux = aux->prox;
if(aux->info>=maior) maior = aux->info;

}

return maior;

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

Lista concatena(Lista lst, Lista lst2){

Lista lst3;
lst3 = cria_lista();
int elem;

while (lst != NULL){
elem = lst->info;
insere_final(&lst3,elem);
lst = lst->prox;

}

while (lst2 != NULL){
elem = lst2->info;
insere_final(&lst3,elem);
lst2 = lst2->prox;

}

return lst3;

}