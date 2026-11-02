#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, aliquota, final;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            aliquota = -1;
    }

    if (aliquota < 0) {
        printf("Erro: código de estado inválido!\n");
    } else {
        final = valor * (1 + aliquota);
        printf("Preço final com imposto de %.0f%%: R$ %.2f\n", aliquota * 100, final);
    }

    system("PAUSE");
    return 0;
}