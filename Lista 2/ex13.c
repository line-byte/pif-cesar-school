#include <stdio.h>
#include <stdlib.h> 

int main()
{
    float lado, base, altura, area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    system("PAUSE");
    return 0;
}