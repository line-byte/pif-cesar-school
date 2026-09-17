#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperatura em Kelvin: %.2f\n", kelvin);

    system("PAUSE");
    return 0;
}