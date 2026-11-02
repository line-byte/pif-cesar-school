#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    /* Três comparações com troca garantem a ordem crescente */
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    system("PAUSE");
    return 0;
}