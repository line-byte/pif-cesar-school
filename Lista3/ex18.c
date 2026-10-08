#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, copia, digito;
    long long int invertido = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: informe um numero positivo!\n");
    } else {
        copia = numero;

        while (copia > 0) {
            digito = copia % 10;              // extrai o ultimo digito
            invertido = invertido * 10 + digito;  // adiciona ao numero invertido
            copia = copia / 10;               // remove o ultimo digito
        }

        printf("Numero original: %d\n", numero);
        printf("Numero invertido: %lld\n", invertido);
    }

    system("PAUSE");
    return 0;
}