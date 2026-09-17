#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias_trabalhados;
    float valor_bruto, desconto, valor_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    valor_bruto = dias_trabalhados * 30.0;
    desconto = valor_bruto * 0.08;
    valor_liquido = valor_bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Valor liquido: R$ %.2f\n", valor_liquido);

    system("PAUSE");
    return 0;
}