#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>   

int main()
{
    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do lado_a: ");
    scanf("%f", &lado_a);

    printf("Digite o valor do lado_b: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    system("PAUSE");
    return 0;
}