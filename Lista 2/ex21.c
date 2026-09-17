#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Codigo ASCII: %d\n", caractere);

    system("PAUSE");
    return 0;
}