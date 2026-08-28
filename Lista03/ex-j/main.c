#include <stdio.h>

/*j) Efetuar a leitura de três valores inteiros desconhecidos, somar os valores fornecidos e apresentar o resultado
somente se for maior ou igual a 100*/

int main()
{
    int a;
    int b;
    int c;
    int soma;

    printf("Bem vindo ao programa de soma maior ou igual a 100.\n");
    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &b);
    printf("Digite o terceiro valor inteiro:\n");
    scanf("%d", &c);
    soma = a + b + c;

    if (soma >= 100)
        printf("A soma dos valores é %d, portanto maior ou igual a 100.\n", soma);
    else
        printf("A soma dos valores é %d, portanto menor que 100.\n", soma);
    return 0;
}