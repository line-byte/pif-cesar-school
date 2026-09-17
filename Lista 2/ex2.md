### Questão 02

**a)** O uso de funções da biblioteca `<conio.h>`, como `getch()` e `getche()`, deve ser evitado porque `<conio.h>` **não faz parte do padrão ANSI C**. Essas funções são específicas de determinados compiladores e sistemas operacionais, podendo não existir ou funcionar de maneira diferente em sistemas modernos como Linux e macOS. Isso reduz a **portabilidade** do programa.

**b)** As funções portáveis da biblioteca padrão `<stdio.h>` para entrada e saída de caracteres são:

* `getchar()` — lê um caractere da entrada padrão.
* `putchar()` — escreve um caractere na saída padrão.

Essas funções fazem parte do padrão C e, portanto, são mais portáveis.

**c)** Um trecho de código padrão C que lê um caractere e ignora eventuais quebras de linha residuais pode ser:

```c
#include <stdio.h>

int main()
{
    int caractere;

    do
    {
        caractere = getchar();
    }
    while (caractere == '\n');

    printf("Caractere lido: %c\n", caractere);

    return 0;
}
```

Nesse código, `getchar()` é usado para ler os caracteres da entrada padrão. O `do...while` faz com que os caracteres `'\n'` sejam ignorados até que seja encontrado um caractere diferente de quebra de linha.
