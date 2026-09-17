# Questão 06
### Erros de sintaxe:
1. A declaração das variáveis está incorreta:
```c
int a=1; b=2; c=3:
```

As variáveis `b` e `c` não foram declaradas como `int`. O correto seria declarar as três variáveis:
```c
int a=1, b=2, c=3;
```

2. Foi utilizado `:` (dois-pontos) após `c=3`, quando deveria ser utilizado `;` (ponto e vírgula).

3. A instrução `printf()` está com as aspas posicionadas incorretamente. O texto deve estar completamente entre aspas e os valores das variáveis devem ser colocados depois da vírgula.

O correto é:
    ```c
    printf("Os numeros sao: %d%d%d\n", a, b, c);
    ```

### Erros de lógica:
4. O `printf()` possui quatro argumentos correspondentes aos valores (`a`, `b`, `c` e `d`), porém a variável `d` não foi declarada. Além de causar erro, ela não deveria ser utilizada, pois o programa possui apenas as variáveis `a`, `b` e `c`.

5. O texto `"0s números são"` apresenta `0` (zero) no lugar da letra `O`. O correto é `"Os numeros sao"`.
### Versão corrigida:
```c
#include <stdio.h> /* Para printf() */
#include <stdlib.h> /* Para system() */

int main()
{
    int a=1, b=2, c=3;

    printf("Os numeros sao: %d%d%d\n", a, b, c);

    system("PAUSE");

    return 0;
}
```
Portanto, os principais problemas são a declaração incorreta das variáveis, o uso de `:` no lugar de `;`, as aspas incorretas no `printf()` e a utilização da variável `d`, que não foi declarada.