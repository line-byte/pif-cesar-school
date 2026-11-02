#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Erro: o ano deve ser um número inteiro positivo!\n");
    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    system("PAUSE");
    return 0;
}