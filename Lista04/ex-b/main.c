#include <stdio.h>

/*b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser 
apresentada de acordo com sua forma tradicional. Ex.:    1x1 = 1     
1x2 = 2*/


int main() 
{
    int i, num;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) 
        printf("%d x %d = %d\n", num, i, num * i);

    return 0;
}