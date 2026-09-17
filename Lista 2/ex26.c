#include <stdio.h>
#include <stdlib.h> 

int main()
{
    float comprimento, largura, preco_metro, perimetro, metros_arame, custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame farpado: R$ ");
    scanf("%f", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo_total = metros_arame * preco_metro;

    printf("Quantidade de arame: %.2f metros\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    system("PAUSE");
    return 0;
}