#include <stdio.h>
#include <stdlib.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distância percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: a quantidade de litros deve ser maior que zero!\n");
    } else {
        consumo = distancia / litros;
        printf("Consumo: %.2f km/l\n", consumo);

        if (consumo < 8.0) {
            printf("Venda o carro!\n");
        } else if (consumo <= 14.0) {
            printf("Econômico!\n");
        } else {
            printf("Super econômico!\n");
        }
    }

    system("PAUSE");
    return 0;
}