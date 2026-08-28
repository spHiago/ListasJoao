#include <stdio.h>

/*d) Ler três valores inteiros e apresentar os valores lidos 
dispostos em ordem crescente*/

int main()
{
    int a;
    int b;
    int c;
    
    printf("Bem vindo ao programa de ordenação.\n");
    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    printf("Digite o valor de C:\n");
    scanf("%d", &c);
    
    if (a <= b && a <= c) /*a é menor*/
    {
        if (b < c)
        {
            printf("A ordem crescente é: %d, %d, %d\n", a, b, c);
        }
        else
        {
            printf("A ordem crescente é: %d, %d, %d\n", a, c, b);
        }
    }
    
    else if (b <= a && b <= c) /*b é menor*/
    {
        if (a < c)
        {
            printf("A ordem crescente é: %d, %d, %d\n", b, a, c);
        }
        else
        {
            printf("A ordem crescente é: %d, %d, %d\n", b, c, a);
        }
    }
    
    else /*c é menor*/
    {
        if (a < b)
        {
            printf("A ordem crescente é: %d, %d, %d\n", c, a, b);
        }
        else
        {
            printf("A ordem crescente é: %d, %d, %d\n", c, b, a);
        }
    }
    return 0;
}