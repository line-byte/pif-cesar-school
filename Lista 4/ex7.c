#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x;

    printf("Digite um número real: ");
    scanf("%f", &x);

    if (x >= 0) {
        printf("A raiz quadrada de %.2f é %.2f\n", x, sqrt(x));
    } else {
        printf("O quadrado de %.2f é %.2f\n", x, x * x);
    }

    system("PAUSE");
    return 0;
}