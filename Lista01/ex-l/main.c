#include <stdio.h>

/*l) Crie um algoritmo, utilizando estruturas de múltipla escolha, que imprima na tela o sexo (Masculino ou Feminino)
de uma pessoa. Utilize caracteres (M ou F) como entrada.*/

int main()
{
    char sexo;

    printf("Bem vindo ao programa de identificação de sexo.\n");
    printf("Digite 'M' para Masculino ou 'F' para Feminino:\n");
    scanf(" %c", &sexo);

    switch (sexo)
    {
        case 'M':
        case 'm':
            printf("O sexo correspondente é Masculino.\n");
            break;
        case 'F':
        case 'f':
            printf("O sexo correspondente é Feminino.\n");
            break;
        default:
            printf("Caractere inválido. Por favor, digite 'M' para Masculino ou 'F' para Feminino.\n");
    }
    return 0;
}