#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    printf("=== ATENDIMENTO AUTOMÁTICO ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para a consulta de saldo...\n");
            break;
        case 2:
            printf("Direcionando para a emissão de extrato...\n");
            break;
        case 3:
            printf("Direcionando para a transferência...\n");
            break;
        case 4:
            printf("Aguarde, você será transferido para um atendente...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    system("PAUSE");
    return 0;
}