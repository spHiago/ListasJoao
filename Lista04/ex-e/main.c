#include <stdio.h>

/*e) Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
a sequência não for interrompida*/

int main()
{
    int proximo;
    int limit;
    char choice;

    do
    {
        printf("Escolha um limitador entre 5 e 10 para a sequencia Fibonacci:\n");
        scanf("%d", &limit);

        while(limit < 5 || limit > 10)
        {
            printf("Limitador nao esta de acordo com as diretrizes, tente novamente.");
            scanf("%d", &limit);
        }
        printf("Sequencia Fibonacci:\n");
            int anterior = 0;
           int atual = 1;

        for (int i = 0; i < limit; i++)
        {
            if (i == 0)
                proximo = 0;
            else if (i == 1)
                proximo = 1;
            else
            {
                proximo = anterior + atual;
                anterior = atual;
                atual = proximo;
            }
            printf("%d ", proximo);
        }
        printf("\n\n");

        printf("Rodar novamente ? y/n");
        scanf(" %c", &choice);


        while(choice != 'y' && choice != 'n')
        {
            printf("resposta invalida, tente novamente.");
            scanf(" %c", &choice);
        }
    }while(choice == 'y');

    return 0;
}

