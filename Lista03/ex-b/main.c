/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*b) Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a média aritmética desse aluno e
apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
solicitar a quinta nota (nota de exame) do aluno e calcular uma nova média aritmética entre a nota de exame e
a primeira média aritmética. Se o valor da nova média for maior ou igual a sete, apresentar a mensagem
"Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a
apresentação das mensagens, o valor da média obtida pelo aluno*/

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
    float soma1;
    float media1;
    float soma2;
    float media2;
    
    printf("Bem vindo a calculadora de media e autenticadora de notas de aluno.\n");
    printf("Média maior ou igual a 7 = Aprovado\n");
    printf("Média menor que 7 = Requer nota do quinto exame.\n");
    printf("Após o exame, se a media for maior ou igual a 7, sera aprovado por exame.\n");
    printf("Caso contrário, o aluno será reprovado.\n");
    printf("\n \n");
    
    printf("Dito isso, digite as notas dos quatros exames do aluno:\n");
    printf("Digite a nota do primeiro exame: \n");
    scanf("%f", &nota1);
    printf("Digite a nota do segundo exame:\n");
    scanf("%f", &nota2);
    printf("Digite a nota do terceiro exame:\n");
    scanf("%f", &nota3);
    printf("Digite a nota do quarto exame:\n");
    scanf("%f", &nota4);
    
    if (media1 >= 7)
    {
      printf("Sua media final foi %f, parabens.\n", media1);
      printf("Aprovado\n");
      return 0;
    }
    printf("Por favor, digite a nota do quinto exame:\n");
    scanf("%f", &nota5);
    soma2 = soma1 + nota5;
    media2 = soma2 / 5;
    if (media2 >= 7)
    {
        printf("%f\n", media2);
        printf("Aprovado em exame.\n");
        return 0;
    }
    else
    {
        printf("Reprovado.\n");
    }
    return 0;
}
