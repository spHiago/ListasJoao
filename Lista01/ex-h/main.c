#include <stdio.h>


/* h) Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve
apresentar a mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor
estiver fora da faixa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida"*/
int main()
{
    int a;

    printf("Bem vindo ao programa de autenticação.\n");
    printf("Digite um valor inteiro inteiro de 1 a 9 para autenticação:\n");
    scanf("%d", &a);

    if (a > 0 && a < 10)
        printf("O valor está na faixa permitida.\n");
    else
        printf("O valor está fora da faixa permitida.\n");

    return 0;
}