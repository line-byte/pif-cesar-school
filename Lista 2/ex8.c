#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int numero, quadrado;
    float decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima_parte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    system("PAUSE");
    return 0;
}