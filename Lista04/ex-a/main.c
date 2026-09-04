#include <stdio.h>

/* a) Elaborar um programa que apresente os quadrados dos números inteiros existentes na faixa de valores de 
15 a 200. */

int main() 
{
    int i;
    
    for (i = 15; i <= 200; i++) {
        printf("O quadrado de %d é %d\n", i, i * i);
    }
    return 0;
}