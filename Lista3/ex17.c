#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, soma = 0.0, maior = 0.0, menor = 10.0, media;
    int total = 0;

    printf("Digite as notas (0.0 a 10.0). Digite -1.0 para encerrar.\n");

    do {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            total++;

            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        } else if (nota != -1.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n");
        }
    } while (nota != -1.0);

    if (total > 0) {
        media = soma / total;
        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    } else {
        printf("\nNenhuma nota valida foi digitada.\n");
    }

    system("PAUSE");
    return 0;
}