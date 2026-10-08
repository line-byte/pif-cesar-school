#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int divisores = 0;

    printf("Informe um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero positivo!\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }

        printf("Quantidade de divisores de %d: %d\n", n, divisores);

        if (divisores == 2) {
            printf("%d e um numero primo!\n", n);
        } else {
            printf("%d nao e um numero primo.\n", n);
        }
    }

    system("PAUSE");
    return 0;
}