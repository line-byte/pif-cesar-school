#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("\nNumeros no intervalo fechado entre %d e %d:\n", a, b);

    if (a <= b) {
        // Ordem crescente
        for (i = a; i <= b; i++) {
            printf("%d\t", i);
        }
    } else {
        // Ordem decrescente
        for (i = a; i >= b; i--) {
            printf("%d\t", i);
        }
    }
    printf("\n");

    system("PAUSE");
    return 0;
}