#include <stdio.h>
#include <stdlib.h>
#include "listaord.h"
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

int insere_ord(Lista lst, int elem){


if (lst == NULL || lista_cheia(lst) == 1)
return 0; 

if (lista_vazia(lst) == 1 || elem >= lst->no[lst->fim-1]) {
lst->no[lst->fim] = elem; 

}

else {
int i, 
aux= 0;
while (elem >= lst->no[aux]) 

aux++;
for (i = lst->fim; i > aux; i--)

lst->no[i] = lst->no[i-1];
lst->no[aux] = elem; 

}
lst->fim++; 

return 1;  

}

int remove_ord(Lista lst, int elem){

if (lst == NULL || lista_vazia(lst) == 1 || elem < lst->no[0] || elem > lst->no[lst->fim-1])
return 0; 

int i, Aux = 0;

while(Aux < lst->fim && lst->no[Aux] < elem)
Aux++;

if (Aux == lst->fim || lst->no[Aux] > elem) 
return 0; 


for (i = Aux+1; i < lst->fim; i++)
lst->no[i-1] = lst->no[i];
lst->fim--; 

return 1; 
}

Lista intercala(Lista lst, Lista lst2){

Lista lst3;
lst3 = cria_lista();
int i;

for(i=0;i<lst->fim;i++){
insere_ord(lst3,lst->no[i]);
}
for(i=0;i<lst2->fim;i++){
insere_ord(lst3,lst2->no[i]);
}
return lst3;
}

Lista remove_pares(Lista lst){

int i,j;
Lista aux;

if(lst==NULL||lista_vazia(lst)==1){
	return lst;}

aux = cria_lista();

for(i=0;i<lst->fim;i++){
aux->no[i] = lst->no[i];
}
aux->fim = lst->fim;

for(i=0;i<aux->fim+1;i++){
if(aux->no[i-1]%2==0 && i!=0){i = i-1;}
if(aux->no[i]%2==0){
remove_ord(aux,aux->no[i]);
}

}

return aux;
}

int maior(Lista lst){

int maior,i;

maior = lst->no[0];
if(lista_vazia(lst)==1||lst==NULL){return NULL;}
for(i=1;i<lst->fim;i++){

if(lst->no[i]>maior){maior=lst->no[i];}}
return maior;}

int tamanho(Lista lst){

return lst->fim;

}

int iguais(Lista lst, Lista lst2){

int i;

if(lst->fim == lst2->fim){

for(i=0;i<lst->fim+1;i++){

if(lst->no[i]!=lst2->no[i]){break;}

}
if(i!=lst->fim){return 0;}
else{return 1;}
}
else{return 0;}
}