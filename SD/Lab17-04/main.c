#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoesDeBase.h"

int main()
{
    unsigned int a, b;
    a = 42;
    b = 21;
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    //Verificação das operações bit-a-bit

    printf("Exemplos das operacoes bit-a-bit:\n");
    printf(" a & b = %d\n", a & b);
    printf(" a | b = %d\n", a | b);
    printf(" a ^ b = %d\n", a ^ b);
    printf("    ~a = %d\n", ~a);
    printf("a >> 2 = %d\n", a >> 2);
    printf("a << 2 = %d\n\n", a << 2);
    //Verificação de números em Base Binária
    printf("Exemplos de numeros em Base Binaria:\n");
    printbits8(42);
    printbits8(99);
    //Verificação de números em Base Hexadecimal
    printf("\nExemplos de numeros em Base Hexadecimal:\n");
    printf(" 92 = %x\n", 92);
    printf("256 = %x\n\n", 256);
    //Verificação de números em Base Octal
    printf("Exemplos de numeros em Base Octal:\n");
    printf("39 = %o\n", 39);
    printf("45 = %o\n\n", 45);
    float x = 2.15625;
    //Verificação de números sinalizados em Base Binária
    printf("Exemplos de numeros sinalizados em Base Binaria:\n");
    printbits8(21);
    printbits8(-21);
    printbits8(145);
    printbits8(-145);
    //Verificação de números sinalizados em Base Hexadecimal
    printf("\nExemplos de numeros sinalizados em Base Hexadecimal:\n");
    printf(" 421 = %x\n", 421);
    printf("-421 = %x\n", -421);
    printf(" 256 = %x\n", 256);
    printf("-256 = %x\n\n", -256);
    //Verificação de números em Base Octal
    printf("Exemplos de numeros em Base Octal:\n");
    printf(" 123 = %o\n", 123);
    printf("-123 = %o\n", 123);
    printf(" 726 = %o\n", 726);
    printf("-726 = %o\n\n", 726);
    //Verificação de números Reais sinalizados
    printf("Exemplos de numeros Reais:\n");
    printf("%f = %x\n", x, (unsigned long int)x);
    printf("3.141592 = %x\n\n", 3.141592);
    int i, t, y, f, g, c, add, sub, mult, mod;
    float div, w, z, d, e;
    t = 19;
    y = 6;

        printf("Exemplos dos Operadores Aritmeticos Basicos:\n");
    add = 19 + 6;
    printf("19 + 6 = %i\n", add);
    sub = 19 - 6;
    printf("19 - 6 = %i\n", sub);
    mult = 19 * 6;
    printf("19 * 6 = %i\n", mult);
    mod = 19 % 6;
    printf("19 %% 6 = %i\n", mod);
    div = 19 / 6;
    printf("19 / 6 = %f\n", div);
    printf("\nExemplos dos Operadores Aritmeticos Especiais:\n");
    t = 4;
    printf("t valia 4. Agora, t = %d (t++)\n", t++);
    t = 4;
    printf("t valia 4. Agora, t = %d (++t)\n", ++t);
    t = 4;
    printf("t valia 4. Agora, t = %d (t--)\n", t--);
    t = 4;
    printf("t valia 4. Agora, t = %d (--t)\n", --t);
    t = -3;
    y = 2;
    w = 5.7;
    z = 8.2;
    printf("\nExemplos dos Operadores Aritmeticos da biblioteca math.h:\n");
    f = fabs(x);
    printf("f = %i\n", f);
    g = pow(f, y);
    printf("g = %i\n", g);
    d = floor(w);
    printf("d = %f\n", d);
    c = sqrt(w * 125);
    printf("c = %i\n", c);
    e = ceil(z);
    printf("e = %f\n", e);
    printf("\nExemplo para mostrar overflow:\n");
    for(i = 0; i <= 32; i++)
        printf("2 elevado a %i = %i\n", i, (int)pow(2, i));
    printf("\nExemplo para mostrar underflow:\n");
    for(i = 0; i <= 32; i++)
        printf("-(2 elevado a %i) = %i\n", i, (int)(-1 * pow(2, i)));
    printf("\n");
    x = 45;
    //Verifique o que ocorre quando a linha abaixo é descomentada.
    //x /= 0;
    system("pause");
    return 0;
}
