#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float salario, novoSalario, desconto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o salario atual: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                    printf("Reajuste de 15%%. Novo salario: R$ %.2f\n", novoSalario);
                } else {
                    novoSalario = salario * 1.10;
                    printf("Reajuste de 10%%. Novo salario: R$ %.2f\n", novoSalario);
                }
                break;

            case 2:
                printf("Informe o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000.00) {
                    desconto = salario * 0.08;
                    printf("Aliquota de 8%%. ");
                } else {
                    desconto = salario * 0.15;
                    printf("Aliquota de 15%%. ");
                }
                printf("Desconto: R$ %.2f | Salario liquido: R$ %.2f\n",
                       desconto, salario - desconto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}