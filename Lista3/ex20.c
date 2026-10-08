#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;

    printf("Tabela ASCII (caracteres imprimiveis)\n\n");
    printf("%-8s %-8s %-10s\n", "Decimal", "Hexa", "Caractere");
    printf("--------------------------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%-8d %-8X %-10c\n", codigo, codigo, codigo);
    }

    system("PAUSE");
    return 0;
}