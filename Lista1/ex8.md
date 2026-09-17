# Questão 08

O programa utiliza sequências de escape dentro da função `printf()` para controlar a forma como o texto será exibido no console.

Na instrução:

```c
printf("\n\t\"Primeiro programa\"");
```

são utilizadas três sequências de escape:

* `\n` → realiza uma quebra de linha antes da mensagem;
* `\t` → insere uma tabulação antes do texto;
* `\"` → permite imprimir aspas duplas dentro da mensagem.

Como não existe uma quebra de linha (`\n`) depois das aspas finais de `"Primeiro programa"`, a mensagem exibida pelo comando `system("PAUSE")` aparece imediatamente após o texto, na mesma linha.

### Saída exata no console:

```text
        "Primeiro programa"Pressione qualquer tecla para continuar. . .
```

Portanto, o texto `"Primeiro programa"` é exibido após uma quebra de linha e uma tabulação, e a mensagem do `system("PAUSE")` aparece logo em seguida, na mesma linha.