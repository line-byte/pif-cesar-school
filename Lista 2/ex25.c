#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    float salario_base, gratificacao, imposto, salario_liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}