/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

/*c) Efetuar a leitura de três valores numéricos e processar o cálculo da equação completa de segundo grau,
utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis condições para
delta: delta < 0 - não há solução real, delta > 0 - há duas soluções reais e diferentes e delta = 0 - há apenas
uma solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes
A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para
delta.*/

int main()
{
    int a;
    int b;
    int c;
    int delta;
    double x1;
    double x2;
    
    printf("Bem vindo a Bhaskara Calculator.\n");
    printf("Para começarmos, digite o valor de A:\n");
    scanf("%d", &a);
    printf("Agora digite o valor de B:\n");
    scanf("%d", &b);
    printf("E por final, digite o valor de C:\n");
    scanf("%d", &c);
    
    if (a == 0 || b == 0 || c == 0) /*verifica se esta completa*/
{
    printf("A equacao nao e completa.\n");
    return 0;
}
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0) /*sem soluçao real*/
    {
        printf("O valor de delta resultou em %d, portanto nao há solução real.\n", delta);
        return 0;
    }
    
    if (delta == 0) /*uma soluçao real*/
    {
        printf("O valor de delta resultou em %d, portanto há apenas uma soluçao real. \n", delta);
         x1 = (-b + sqrt(delta)) / (2 * a);
         printf("O valor é %f\n", x1);
    }
    
    else  /*duas soluçoes reais*/
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
    
      printf("O primeiro valor é %f\n", x1);
      printf("O segundo valor é %f\n", x2);
        
       return 0;
    }
    
    return 0;
}
