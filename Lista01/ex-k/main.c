#include <stdio.h>

/*k) Escreva um programa utilizando estruturas de múltipla escolha que imprima na tela o mês de acordo com o
número digitado pelo usuário. Exemplo: Se escolhido 2 irá imprimir Fevereiro*/

int main()
{
    int mes;

    printf("Bem vindo ao programa de identificação de meses.\n");
    printf("Digite um número de 1 a 12 para identificar o mês correspondente:\n");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1:
            printf("O mês correspondente é Janeiro.\n");
            break;
        case 2:
            printf("O mês correspondente é Fevereiro.\n");
            break;
        case 3:
            printf("O mês correspondente é Março.\n");
            break;
        case 4:
            printf("O mês correspondente é Abril.\n");
            break;
        case 5:
            printf("O mês correspondente é Maio.\n");
            break;
        case 6:
            printf("O mês correspondente é Junho.\n");
            break;
        case 7:
            printf("O mês correspondente é julho.\n");
            break;
        case 8:
            printf("O mês correspondente é Agosto.\n");
            break;
        case 9:
            printf("O mês correspondente é Setembro.\n");
            break;
        case 10:
            printf("O mês correspondente é Outubro.\n");
            break;
        case 11:
            printf("O mês correspondente é Novembro.\n");
            break;
        case 12:
            printf("O mês correspondente é Dezembro.\n");
            break;
        default:
            printf("Número inválido. Por favor, digite um número de 1 a 12.\n");
    }
    return 0;

}