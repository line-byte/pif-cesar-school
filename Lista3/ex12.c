#include <stdio.h>
#include <stdlib.h>

int main() {
    int celsius;
    float fahrenheit, kelvin;

    printf("Tabela de Conversao de Temperaturas\n\n");
    printf("%-10s %-12s %-10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("--------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;

        printf("%-10d %-12.2f %-10.2f\n", celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}