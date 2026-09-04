#include <stdio.h>
#include <math.h>

/*d) Escrever um programa que apresente como resultado a potência de uma base qualquer elevada a um
expoente qualquer, ou seja, de BS^EX, em que BS é o valor da base e EX o valor do expoente. Considere
apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais. Use a técnica de laço de
repetição, em que o valor da base deve ser multiplicado o número de vezes determinado no expoente*/

int main()
{
    int base;
    int exp;
    int soma;

    printf("Escolha um numero inteiro positivo qualquer:\n");;
    scanf("%d", &base);

    printf("Agora escolha um expoente:\n");
    scanf("%d", &exp);

    soma = pow(base, exp);

    printf("%d elevado a %d é igual a: %d\n", base, exp, soma);

    return 0;
}