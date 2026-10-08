#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor, restante;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int i, quantidade;

    printf("Informe o valor do saque (inteiro positivo): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: informe um valor positivo!\n");
    } else if (valor == 1 || valor == 3) {
        printf("Erro: nao e possivel sacar R$ %d com cedulas de 100, 50, 20, 10, 5 e 2.\n", valor);
    } else {
        restante = valor;
        printf("\nSaque de R$ %d:\n", valor);

        for (i = 0; i < 6; i++) {
            quantidade = 0;

            while (restante >= notas[i]) {
                if (restante - notas[i] == 1 || restante - notas[i] == 3) {
                break;
                }
            restante -= notas[i];
            quantidade++;
            }

            if (quantidade > 0) {
                printf("%d nota(s) de R$ %d\n", quantidade, notas[i]);
            }
        }
    }

    system("PAUSE");
    return 0;
}