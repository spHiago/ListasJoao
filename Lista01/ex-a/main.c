/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


/*a) Efetuar leitura de dois valores numéricos inteiros e apresentar o resultado da diferença do maior valor pelo
menor valor.*/

int main()
{
    int valorX; 
    int valorY;
    int result;
    printf("Bem vindo a calculadora de diferença de valores\n");
    printf("Digite o primeiro valor:\n");
    scanf("%d", &valorX);
    printf("Agora digite o segundo valor:\n");
    scanf("%d", &valorY);
    result = valorX - valorY;
    printf("a diferença entre %d e %d é %d.\n", valorX, valorY, result);

    return 0;
}
