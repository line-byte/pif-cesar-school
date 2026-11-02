#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro ângulo: ");
    scanf("%d", &a);
    printf("Digite o segundo ângulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro ângulo: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Triângulo Retângulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Erro: os ângulos não formam um triângulo (soma diferente de 180)!\n");
    }

    system("PAUSE");
    return 0;
}