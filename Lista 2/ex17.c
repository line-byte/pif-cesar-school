#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.141593;
    float raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2.0 * PI * raio;

    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    system("PAUSE");
    return 0;
}