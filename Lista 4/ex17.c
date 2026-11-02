#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Opção de pagamento (1 = À Vista com 10%% de desconto; 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90;
        comissao = final * 0.05;
        printf("Valor final a pagar à vista: R$ %.2f\n", final);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Erro: opção de pagamento inválida!\n");
    }

    system("PAUSE");
    return 0;
}