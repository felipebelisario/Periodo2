#include <stdlib.h>

int main(){

system("gcc -c listadinordcir.c");
system("gcc -c usuario.c");
system("gcc -o ex listadinordcir.o usuario.o");
return 0;

}