#include <stdio.h>


/*) Efetuar a leitura do sexo de uma pessoa e apresentar como saída uma das seguintes mensagens:
"Excelentíssimo Senhor,", caso seja informado o sexo masculino, ou " Excelentíssimo Senhora", caso seja
informado o sexo feminino. O programa deve, após a entrada do sexo, verificar primeiramente se o sexo
fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa condição verdadeira, o programa
deve apresentar a mensagem "Sexo informado inválido"*/


int main()
{
    char sexo;

    printf("Bem vindo ao programa de identificação de sexo.\n");
    printf("Digite M para masculino ou F para feminino:\n");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
        printf("Excelentíssimo Senhor.\n");
    else if (sexo == 'F' || sexo == 'f')
        printf("Excelentíssima Senhora.\n");
    else
        printf("Sexo informado inválido. Por favor, digite M ou F.\n");
    return 0;
}