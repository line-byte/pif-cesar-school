#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;

    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 && a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    system("PAUSE");
    return 0;
}