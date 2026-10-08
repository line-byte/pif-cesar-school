#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, soma = 0.0, media;
    int quantidade = 0;

    printf("Digite valores reais positivos (negativo para parar):\n");

    do {
        printf("Valor: ");
        scanf("%f", &valor);

        if (valor >= 0) {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\nQuantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    system("PAUSE");
    return 0;
}