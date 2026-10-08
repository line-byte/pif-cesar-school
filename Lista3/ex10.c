#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Os 100 primeiros multiplos positivos de 3:\n\n");

    for (i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    system("PAUSE");
    return 0;
}