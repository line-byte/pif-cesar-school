#include <stdio.h>
#include <stdlib.h> 

int main()
{
    float nota1, nota2, nota3, nota4, media_simples, media_ponderada;

    printf("Digite a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota da prova 4: ");
    scanf("%f", &nota4);

    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    media_ponderada = (nota1 * 1.0 + nota2 * 1.0 + nota3 * 2.0 + nota4 * 2.0) / 6.0;

    printf("Media aritmetica simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    system("PAUSE");
    return 0;
}