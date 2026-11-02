#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    /* a) Paridade */
    if (n % 2 == 0) {
        printf("O número é PAR.\n");
    } else {
        printf("O número é ÍMPAR.\n");
    }

    /* b) Sinal */
    if (n > 0) {
        printf("O número é POSITIVO.\n");
    } else if (n < 0) {
        printf("O número é NEGATIVO.\n");
    } else {
        printf("O número é ZERO.\n");
    }

    system("PAUSE");
    return 0;
}