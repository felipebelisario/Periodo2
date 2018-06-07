#include <stdlib.h>

int main(){

system("gcc -c lista.c");
system("gcc -c usuario.c");
system("gcc -o prog lista.o usuario.o");
return 0;

}