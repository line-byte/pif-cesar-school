#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA = 2026;
    int tentativa, tentativas = 0;
    int acertou = 0;

    while (tentativas < 3 && !acertou) {
        printf("Digite a senha numerica: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa == SENHA) {
            acertou = 1;
        } else if (tentativas < 3) {
            printf("Senha incorreta! Tentativas restantes: %d\n\n", 3 - tentativas);
        }
    }

    if (acertou) {
        printf("\nAcesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("\nConta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}