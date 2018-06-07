#include <stdlib.h>

int main(){

system("gcc -c listadinord.c");
system("gcc -c usuario.c");
system("gcc -o ex listadinord.o usuario.o");
return 0;

}