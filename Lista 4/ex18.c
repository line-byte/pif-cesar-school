#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float temp, resultado;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
    } else {
        printf("Digite a temperatura de entrada: ");
        scanf("%f", &temp);

        switch (opcao) {
            case 1:
                resultado = temp * 1.8 + 32;
                printf("%.2f °C = %.2f °F\n", temp, resultado);
                break;
            case 2:
                resultado = temp + 273.15;
                printf("%.2f °C = %.2f K\n", temp, resultado);
                break;
            case 3:
                resultado = (temp - 32) / 1.8;
                printf("%.2f °F = %.2f °C\n", temp, resultado);
                break;
            case 4:
                resultado = temp - 273.15;
                printf("%.2f K = %.2f °C\n", temp, resultado);
                break;
        }
    }

    system("PAUSE");
    return 0;
}