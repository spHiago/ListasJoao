#include <stdio.h>

/*e) Fazer a leitura de 4 valores numéricos inteiros. 
Apresentar apenas os valores que sejam divisíveis por 2 e 3*/

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("Bem vindo ao programa de divisibilidade.\n");
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Digite o valor de C:\n");
    scanf("%d", &c);
    printf("Digite o valor de D:\n");
    scanf("%d", &d);

    if (a % 2 == 0 && a % 3 == 0)
        printf("O valor %d é divisível por 2 e 3.\n", a);
    if (b % 2 == 0 && b % 3 == 0)
        printf("O valor %d é divisível por 2 e 3.\n", b);
    if (c % 2 == 0 && c % 3 == 0)
        printf("O valor %d é divisível por 2 e 3.\n", c);
    if (d % 2 == 0 && d % 3 == 0)   
        printf("O valor %d é divisível por 2 e 3.\n", d);
    if (a % 2 != 0 && a % 3 != 0 && b % 2 != 0 && b % 3 != 0 && c % 2 != 0 && c % 3 != 0 && d % 2 != 0 && d % 3 != 0)
    {
        printf("Nenhum valor é divisível por 2 e 3.\n");
        return 0;
    }
}