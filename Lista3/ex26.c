#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, j;
    int divisores;
    long long int soma = 0;
    int encontrou = 0;

    do {
        printf("Informe o valor de A (inteiro positivo): ");
        scanf("%d", &a);
        printf("Informe o valor de B (inteiro positivo, maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Erro: A e B devem ser positivos e A < B!\n\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("\nNumeros primos no intervalo [%d, %d]:\n", a, b);

    for (i = a; i <= b; i++) {
        divisores = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d\t", i);
            soma += i;
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero primo encontrado.");
    } else {
        printf("\n\nSoma total dos primos: %lld", soma);
    }
    printf("\n");

    system("PAUSE");
    return 0;
}