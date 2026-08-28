#include <stdio.h>

/*g) Ler um valor numérico inteiro, apresentar uma mensagem 
informando se o valor fornecido é par ou ímpar.*/

int main()
{
    int a; 

    printf("Bem vindo ao programa de paridade.\n");
    printf("Digite um valor inteiro:\n");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("O valor fornecido é par.\n");
    else
        printf("O valor fornecido é ímpar.\n");

    return 0;
}