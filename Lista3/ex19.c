#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Informe o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero positivo!\n");
    } else {
        printf("\nTermos da sequencia de Fibonacci ate N = %d:\n", n);

        for (i = 1; i <= n; i++) {
            if (i <= 2) {
                printf("%d\t", 1);
            } else {
                proximo = anterior + atual;
                anterior = atual;
                atual = proximo;
                printf("%lld\t", atual);
            }
        }

        printf("\n\nO termo %d da sequencia e: %lld\n", n, atual);
    }

    system("PAUSE");
    return 0;
}