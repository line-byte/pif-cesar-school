#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, linha, coluna;
    int numero = 1;

    printf("Informe o numero de linhas (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero positivo!\n");
    } else {
        printf("\n");

        for (linha = 1; linha <= n; linha++) {
            for (coluna = 1; coluna <= linha; coluna++) {
                printf("%d ", numero);
                numero++;
            }
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}