#include <stdio.h>

/*f) Ler cinco valores numéricos inteiros, identificar
 e apresentar o maior e o menor valores informados.*/

 int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int maior;
    int menor;

    printf("Bem vindo ao programa de maior e menor valor.\n");
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Digite o valor de C:\n");
    scanf("%d", &c);
    printf("Digite o valor de D:\n");
    scanf("%d", &d);
    printf("Digite o valor de E:\n");
    scanf("%d", &e);

    maior = a;
    menor = a;

    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    if (d > maior)
        maior = d;
    if (e > maior)
        maior = e;

    if (b < menor)
        menor = b;
    if (c < menor)
        menor = c;
    if (d < menor)
        menor = d;
    if (e < menor)
        menor = e;

    printf("O maior valor informado é: %d\n", maior);
    printf("O menor valor informado é: %d\n", menor);
    
    return 0;
}