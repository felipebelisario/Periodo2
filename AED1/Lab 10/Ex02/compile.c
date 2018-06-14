#include <stdlib.h>

int main(){

system("gcc -c pilhadinp.c");
system("gcc -c usuario.c");
system("gcc -o ex pilhadinp.o usuario.o");
return 0;

}