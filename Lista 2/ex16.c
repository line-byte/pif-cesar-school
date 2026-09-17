#include <stdio.h>
#include <stdlib.h> 

int main()
{
    float altura_degrau, altura_total_metros, altura_total_centimetros;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura total em metros: ");
    scanf("%f", &altura_total_metros);

    altura_total_centimetros = altura_total_metros * 100.0;

    quantidade_degraus = (int)(altura_total_centimetros / altura_degrau);

    printf("Numero minimo de degraus: %d\n", quantidade_degraus);

    system("PAUSE");
    return 0;
}