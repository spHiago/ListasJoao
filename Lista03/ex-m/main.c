#include <stdio.h>

/*m) As taxas de natalidade e mortalidade representam indicadores de desenvolvimento humano que analisam tanto
o aumento da população quanto o seu declínio. Permitem analisar a dinâmica de uma população, segundo as
variáveis que as influenciam, como qualidade de vida, renda, nível de desenvolvimento do país ou unidade
federativa em questão. (Escola Kids, 2020).
Sabendo disto, faça um programa, utilizando estruturas de múltipla escolha, que solicite ao usuário qual cálculo
de taxa ele quer realizar. Utilize as fórmulas abaixo para o cálculo, sendo:*/

int main()
{
    int opcao;
    float natalidade, mortalidade, populacao;

    printf("Bem vindo ao programa de cálculo de taxas.\n");
    printf("Escolha o cálculo que deseja realizar:\n");
    printf("1 - Taxa de Natalidade\n");
    printf("2 - Taxa de Mortalidade\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Digite o número de nascimentos: ");
            scanf("%f", &natalidade);
            printf("Digite o tamanho da população: ");
            scanf("%f", &populacao);
            printf("A taxa de natalidade é: %.2f%%\n", (natalidade / populacao) * 100);
            break;
        case 2:
            printf("Digite o número de óbitos: ");
            scanf("%f", &mortalidade);
            printf("Digite o tamanho da população: ");
            scanf("%f", &populacao);
            printf("A taxa de mortalidade é: %.2f%%\n", (mortalidade / populacao) * 100);
            break;
        default:
            printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
    }
    return 0;
}