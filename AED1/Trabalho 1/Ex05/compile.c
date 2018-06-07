#include <stdlib.h>

int main(){

system("gcc -c listadinordcab.c");
system("gcc -c usuario.c");
system("gcc -o ex listadinordcab.o usuario.o");
return 0;

}