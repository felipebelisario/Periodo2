#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAX  30

struct lista{

int no[MAX];
int fim;

};

Lista cria_lista(){

Lista p;

p = (Lista) malloc(sizeof(struct lista));

if(p!=NULL){
p->fim = 0;}
return p;
}

void print_lista(Lista lst){

int i;

printf("{");

for(i=0;i<lst->fim;i++){
printf(" %d ",lst->no[i]);

}
printf("}");
}

int lista_vazia(Lista lst){

if(lst->fim==0){

	return 1; //Lista vazia
}

else{return 0; //Lista cheia
}
}

int lista_cheia(Lista lst){

if(lst->fim==MAX){return 1; //Lista cheia
}
else{
	return 0; //Lista vazia
}

}

int insere_elem(Lista lst, int elem){

int i;
if(lst==NULL||lista_cheia(lst)==1)
	return 0;

if(lista_vazia(lst)==1) {lst->no[lst->fim] = elem; lst->fim++; return 1;}
else{for (i = lst->fim; i > 0; i--){

lst->no[i] = lst->no[i-1];

}

lst->no[0] = elem;

}
lst->fim++;
return 1;
}

int remove_elem(Lista lst, int elem){

if (lst == NULL || lista_vazia(lst) == 1)
return 0; 

int i, Aux = 0;

while (Aux < lst->fim && lst->no[Aux] != elem)
Aux++;

if (Aux == lst->fim) 
return 0; 


for (i = Aux+1; i < lst->fim; i++)
lst->no[i-1] = lst->no[i];
lst->fim--; 

return 1; 

}

int remove_todos(Lista lst, int elem){

int aux=0, i, cont=0;

if(lst==NULL||lista_vazia(lst)==1){
	return 0;
}

while(aux<lst->fim){

if(lst->no[aux]==elem){
cont++;
for(i=aux+1;i<lst->fim;i++){

lst->no[i-1] = lst->no[i];
}

lst->fim--;}

if(lst->no[aux]!=elem){aux++;}

}
if(cont==0){printf("O numero digitado nao se encontra na lista.\n");}

return 1;

}

Lista remove_impares(Lista lst){

int i,j;
Lista aux;

if(lst==NULL||lista_vazia(lst)==1){
	return 0;}

aux = cria_lista();

for(i=0;i<lst->fim;i++){
aux->no[i] = lst->no[i];
}
aux->fim = lst->fim;

for(i=0;i<aux->fim+1;i++){
if(aux->no[i-1]%2!=0){i = i-1;}
if(aux->no[i]%2!=0){
	for(j=i;j<aux->fim;j++){
aux->no[j]=aux->no[j+1];}
aux->fim--;
}

}

return aux;
}

int menor(Lista lst){

int menor,i;

menor = lst->no[0];
if(lista_vazia(lst)==1||lst==NULL){return NULL;}
for(i=1;i<lst->fim;i++){

if(lst->no[i]<menor){menor=lst->no[i];}}
return menor;}

int tamanho(Lista lst){

return lst->fim;

}

Lista concatena(Lista lst, Lista lst2){

int i,j=0;
Lista aux;
aux = cria_lista();

if(lista_vazia(lst)==1){return lst2;}
if(lista_vazia(lst2)==1){return lst;}
if(lst->fim+lst2->fim>30){printf("A lista concatenada eh maior do que o maximo suportado.\n");return NULL;}

for(i=0;i<lst->fim;i++){
	aux->no[i] = lst->no[i];
	aux->fim++;
}

for(i=lst->fim;i<lst->fim+lst2->fim;i++){
	aux->no[i] = lst2->no[j];
	aux->fim++;
	j++;
}

return aux;

}
