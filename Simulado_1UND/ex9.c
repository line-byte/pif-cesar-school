#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Informe o lado a: ");
    scanf("%lf", &a);
    printf("Informe o lado b: ");
    scanf("%lf", &b);
    printf("Informe o lado c: ");
    scanf("%lf", &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Erro: esses lados nao formam um triangulo valido!\n");
    } else {
        p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("\nSemiperimetro: %.2lf\n", p);
        printf("Area do triangulo: %.2lf\n", area);
    }

    system("PAUSE");
    return 0;
}