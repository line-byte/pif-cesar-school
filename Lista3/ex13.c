#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Informe um numero inteiro N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo!\n");
    } else {
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}