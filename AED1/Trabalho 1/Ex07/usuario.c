#include <stdio.h>
#include <stdlib.h>
#include "listadincirdupla.h"

int main(){

Lista lsta, m3;
int qnt, i, n, elem;
char op;
lsta = cria_lista();
m3 = cria_lista();

printf("Lista criada: ");
print_lista(lsta);
printf("\n");

printf("\nDeseja inserir quantos numeros na lista? ");
scanf("%d", &qnt);

if(qnt!=0){
for(i=0;i<qnt;i++){

printf("Elemento %d: ",i+1);
scanf("%d",&n);
insere_elem(&lsta, n);

}}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

m3 = multiplos_3(lsta);
printf("Lista dos multiplos de 3: ");
print_lista(m3);

printf("\n\n");
printf("---------------------------------\n\n");

printf("Deseja remover qual numero da lista? ");
scanf("%d", &n);
if(lista_vazia(lsta)==1){printf("A lista esta vazia.\n");}
  else{remove_todos(&lsta, n);}

printf("\nLista modificada: ");
print_lista(lsta);

printf("\n\n");
printf("---------------------------------\n\n");

n = tamanho(lsta);
printf("Tamanho: %d",n);

printf("\n\n");
printf("---------------------------------\n\n");

remove_maior(&lsta,&elem);
printf("Lista sem o maior elemento: ");
print_lista(lsta);
printf("\nElemento removido: %d",elem);

free(lsta);
lsta = cria_lista();
printf("\nA lista foi resetada: \n");
printf("Lista: ");
print_lista(lsta);
printf("\n");

}