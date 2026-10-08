#include <stdio.h>
#include <stdlib.h>

// Versão 1: laço for
void contagemFor() {
    int i;
    printf("=== Versao FOR ===\n");
    for (i = 0; i <= 100; i++) {
        printf("%d\t", i);
    }
    printf("\n\n");
}

// Versão 2: laço while
void contagemWhile() {
    int i = 0;
    printf("=== Versao WHILE ===\n");
    while (i <= 100) {
        printf("%d\t", i);
        i++;
    }
    printf("\n\n");
}

// Versão 3: laço do-while
void contagemDoWhile() {
    int i = 0;
    printf("=== Versao DO-WHILE ===\n");
    do {
        printf("%d\t", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main() {
    contagemFor();
    contagemWhile();
    contagemDoWhile();

    system("PAUSE");
    return 0;
}

/*
RESPOSTA: qual estrutura é a mais adequada para este caso e por quê?

A estrutura mais adequada é o laço FOR.

Motivo: o número de repetições é conhecido de antemão (101 iterações,
de 0 a 100) e existe uma variável contadora clara. O for reúne
inicialização, teste e incremento em uma única linha, o que deixa o código
mais curto, legível e com menos risco de esquecer o incremento (o que
causaria um laço infinito).

O while funcionaria, mas espalha o controle do contador em três lugares.
O do-while também funcionaria, mas é desnecessário aqui, pois não há
necessidade de executar o bloco ao menos uma vez antes de testar.
*/