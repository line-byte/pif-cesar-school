#include <stdio.h> 
#include <stdlib.h>

int main()
{
    char maiuscula;
    char minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("Letra minuscula: %c\n", minuscula);

    system("PAUSE");
    return 0;
}