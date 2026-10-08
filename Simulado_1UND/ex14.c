#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA = 2026;
    int tentativa, i;
    int acertou = 0;

    for (i = 1; i <= 3 && !acertou; i++) {
        printf("Tentativa %d de 3 - Digite a senha numerica: ", i);
        scanf("%d", &tentativa);

        if (tentativa == SENHA) {
            acertou = 1;
        } else if (i < 3) {
            printf("Senha incorreta!\n\n");
        }
    }

    if (acertou) {
        printf("\nAcesso Concedido!\n");
    } else {
        printf("\nConta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}