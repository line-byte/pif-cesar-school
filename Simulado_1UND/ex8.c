#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("\nArea da superficie: %.3lf\n", area);
    printf("Volume: %.3lf\n", volume);

    system("PAUSE");
    return 0;
}