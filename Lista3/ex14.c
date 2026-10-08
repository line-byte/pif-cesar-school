#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    long long int soma = 0;

    printf("Numero -> Quadrado\n");
    printf("------------------\n");

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma total dos quadrados: %lld\n", soma);

    system("PAUSE");
    return 0;
}