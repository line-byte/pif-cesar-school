#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    do {
        printf("Informe uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);

        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Erro: N deve ser impar e estar entre 3 e 19!\n\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    printf("\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}