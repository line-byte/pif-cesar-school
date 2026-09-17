#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, horas, minutos, segundos_restantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;

    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos_restantes);

    system("PAUSE");
    return 0;
}