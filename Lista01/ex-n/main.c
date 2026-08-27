#include <stdio.h>

int main()
{
    /*n) Uma escola fornece 5% de desconto para pagamento da mensalidade em dia. A escola ainda fornece, além
deste desconto, um desconto adicional de 50% na mensalidade para filhos de funcionários. Faça um programa
que receba os dados de matrícula, valor da mensalidade e se o pagamento foi feito em dia ou não. Após isto
calcule o programa deverá ler um código que identifique se o aluno é filho de funcionário (1) ou aluno comum
(2) e com base nisso, utilize uma estrutura de múltipla escolha para calcular o valor a ser pago na mensalidade*/

    int matricula;
    float mensalidade;
    char pagamentoEmDia;
    int codigoAluno;
    float valorAPagar;

    printf("Bem vindo ao programa de cálculo de mensalidade.\n");
    printf("Digite o número de matrícula do aluno:\n");
    scanf("%d", &matricula);
    printf("Digite o valor da mensalidade:\n");
    scanf("%f", &mensalidade);
    printf("O pagamento foi feito em dia? (S/N):\n");
    scanf(" %c", &pagamentoEmDia);
    printf("Digite 1 se o aluno é filho de funcionário ou 2 se é aluno comum:\n");
    scanf("%d", &codigoAluno);

    switch (codigoAluno)
    {
        case 1: // filho de funcionário
            valorAPagar = mensalidade * 0.5; // 50% de desconto
            if (pagamentoEmDia == 'S' || pagamentoEmDia == 's')
            {
                valorAPagar *= 0.95; // Desconto adicional de 5%
            }
            break;
        case 2: // Aluno comum
            valorAPagar = mensalidade;
            if (pagamentoEmDia == 'S' || pagamentoEmDia == 's')
            {
                valorAPagar *= 0.95; // Desconto de 5%
            }
            break;
        default:
            printf("Código de aluno inválido. Por favor, digite 1 ou 2.\n");
            return 1; // Encerra o programa com erro
    }

    printf("O valor a ser pago na mensalidade é: R$ %.2f\n", valorAPagar);
    
    return 0;
}