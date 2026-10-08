#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, horas, minutos, segundos;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &total);

    if (total < 0) {
        printf("Erro: informe um valor nao negativo!\n");
    } else {
        horas = total / 3600;
        minutos = (total % 3600) / 60;
        segundos = total % 60;

        printf("\n%d segundos = %d hora(s), %d minuto(s) e %d segundo(s)\n",
               total, horas, minutos, segundos);
    }

    system("PAUSE");
    return 0;
}