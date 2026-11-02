#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, entregue, troco;
    int n100, n50, n20, n10, n5 = 0, n2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente!\n");
    } else {
        troco = entregue - total;
        printf("Troco: R$ %d\n", troco);

        /* Troco ímpar menor que 5 (1 ou 3) não pode ser formado com cédulas de 5 e 2 */
        if (troco % 2 != 0 && troco < 5) {
            printf("Não é possível formar este troco com as cédulas disponíveis.\n");
        } else {
            /* Se o troco é ímpar, usa uma cédula de 5 para torná-lo par.
               O restante par é decomposto sem erro com 100, 50, 20, 10 e 2. */
            if (troco % 2 != 0) {
                n5 = 1;
                troco = troco - 5;
            }

            n100 = troco / 100;
            troco = troco % 100;
            n50 = troco / 50;
            troco = troco % 50;
            n20 = troco / 20;
            troco = troco % 20;
            n10 = troco / 10;
            troco = troco % 10;
            n2 = troco / 2;

            if (n100 > 0) printf("%d cédula(s) de R$ 100\n", n100);
            if (n50 > 0)  printf("%d cédula(s) de R$ 50\n", n50);
            if (n20 > 0)  printf("%d cédula(s) de R$ 20\n", n20);
            if (n10 > 0)  printf("%d cédula(s) de R$ 10\n", n10);
            if (n5 > 0)   printf("%d cédula(s) de R$ 5\n", n5);
            if (n2 > 0)   printf("%d cédula(s) de R$ 2\n", n2);
        }
    }

    system("PAUSE");
    return 0;
}