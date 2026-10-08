#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, i, j;

    do {
        printf("Informe o lado do quadrado (3 a 20): ");
        scanf("%d", &l);

        if (l < 3 || l > 20) {
            printf("Erro: o lado deve estar entre 3 e 20!\n\n");
        }
    } while (l < 3 || l > 20);

    printf("\n");

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}