#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));              // muda a semente a cada execucao
    secreta = rand() % 26 + 'a';    // sorteia uma letra de 'a' a 'z'

    printf("=== Jogo de Adivinhacao ===\n");
    printf("Sorteei uma letra minuscula de 'a' a 'z'. Tente adivinhar!\n\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);     // o espaco antes de %c ignora o Enter anterior
        tentativas++;

        if (palpite < secreta) {
            printf("Errou! A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > secreta) {
            printf("Errou! A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        }
    } while (palpite != secreta);

    printf("\nParabens! Voce acertou a letra '%c'!\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);

    system("PAUSE");
    return 0;
}