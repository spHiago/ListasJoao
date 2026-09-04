#include <stdio.h>

/*c) Construir um programa que apresente a soma dos cem primeiros números naturais: (1+2+3+
...+98+99+100).*/

int main()
{
    int i, soma = 0;

    for (i = 1; i <= 100; i++) 
        soma += i;

    printf("A soma dos cem primeiros números naturais é: %d\n", soma);

    return 0;
}