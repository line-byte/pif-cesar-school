#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    int encontrou = 0;

    printf("Informe um numero limite inteiro positivo: ");
    scanf("%d", &num);

    printf("\nMultiplos de 3 e de 5 entre 1 e %d:\n", num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\t", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }
    printf("\n");

    system("PAUSE");
    return 0;
}