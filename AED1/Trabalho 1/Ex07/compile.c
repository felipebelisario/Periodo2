#include <stdlib.h>

int main(){

system("gcc -c listadincirdupla.c");
system("gcc -c usuario.c");
system("gcc -o ex listadincirdupla.o usuario.o");
return 0;

}