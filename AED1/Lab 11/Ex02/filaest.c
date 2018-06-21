#include <stdio.h>
#include <stdlib.h>
#include "filaest.h"
#define max 20


struct fila {
int no[max];
int ini, cont;
};

Fila cria_fila() {
    Fila f;
    f = (Fila) malloc(sizeof(struct fila));
    if (f != NULL) {
        f->ini = 0;
        f->cont = 0;
    }
    return f;
}

int fila_vazia(Fila f) {
    if (f->cont == 0)
        return 1;
    else
        return 0;
}

int fila_cheia(Fila f) {
    if (f->cont == max)
        return 1;
    else
        return 0;
}

int insere_fim(Fila f, int elem) {
    if (fila_cheia(f) == 1)
        return 0;
// Insere elemento no final
    f->no[(f->ini+f->cont)%max] = elem;
    f->cont++; 
// Incremento normal
    return 1;
}

int remove_ini(Fila f, int *elem) {
    if (fila_vazia(f) == 1)   return 0;
// Remove o elemento do inicio
*elem = f->no[f->ini];
    f->ini = (f->ini+1)%max; 
// Incremento circular
    f->cont--; 
// Decremento não circular
    return 1;  }


 int print_fila(Fila f){

int aux = f->ini;
if(fila_vazia(f)==1) {printf("{}"); return 0;}
printf("{");

do{
printf(" %d ",f->no[aux]);
aux = (aux+1)%max;
}while(aux!=(f->ini+f->cont)%max);

printf("}\n");
return 1;
 }