#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%f", &a);

    printf("Digite o lado b: ");
    scanf("%f", &b);

    printf("Digite o lado c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semi-perimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    system("PAUSE");
    return 0;
}