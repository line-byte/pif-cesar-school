# Questão 04
### Erros encontrados:
1. Há um ponto e vírgula (`;`) após `#include <stdlib.h>`. As diretivas `#include` não utilizam ponto e vírgula.
2. A função principal foi escrita como `Main`, porém em C deve ser escrita como `main`, pois a linguagem diferencia letras maiúsculas e minúsculas.
3. A declaração da função principal está incorreta. O correto é `int main()` seguido pelo corpo da função entre chaves `{ }`.
4. Foram utilizados parênteses no lugar incorreto após a declaração da função.
5. Na função `printf()`, a mensagem de texto não está entre aspas. O correto é colocar a mensagem entre `" "`.
6. O comando `cout << endl;` pertence à linguagem C++, não à linguagem C. Portanto, deve ser removido.
7. O programa utiliza `)` para encerrar a função, mas o correto é utilizar uma chave `}`.

### Programa corrigido:
```c
#include <stdio.h> /* Para printf() */
#include <stdlib.h> /* Para system() */

int main() /* Funcao main */
{ /* inicio do corpo da funcao main */

    printf("Existem %d semanas no ano.\n", 52); /* Chamada a funcao printf */

    system("PAUSE"); /* Pausa o console */

    return 0;

} /* Fim do corpo da funcao main */
```

### Saída esperada:
```text
Existem 52 semanas no ano.
```