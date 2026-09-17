#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    --antecessor;

    sucessor = numero;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    system("PAUSE");
    return 0;
}