#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    const float PI = 3.141593;
    float graus, radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Valor em radianos: %.2f\n", radianos);

    system("PAUSE");
    return 0;
}