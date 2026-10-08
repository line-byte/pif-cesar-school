#include <stdio.h>
#include <stdlib.h>

#define VALOR_DIA 45.00
#define GRATIFICACAO 0.05
#define IMPOSTO 0.08

int main() {
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Informe o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("Erro: informe um numero de dias valido!\n");
    } else {
        bruto = dias * VALOR_DIA;
        gratificacao = bruto * GRATIFICACAO;
        imposto = bruto * IMPOSTO;
        liquido = bruto + gratificacao - imposto;

        printf("\n===== HOLERITE =====\n");
        printf("Dias trabalhados:   %d\n", dias);
        printf("Salario bruto:      R$ %.2f\n", bruto);
        printf("Gratificacao (5%%):  R$ %.2f\n", gratificacao);
        printf("Imposto (8%%):       R$ %.2f\n", imposto);
        printf("--------------------\n");
        printf("Valor liquido:      R$ %.2f\n", liquido);
    }

    system("PAUSE");
    return 0;
}