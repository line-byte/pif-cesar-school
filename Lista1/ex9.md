# Questão 09

O modificador `%c` é utilizado para imprimir um único caractere. No primeiro `printf()`, são passados três caracteres simples:

* `'\n'` → quebra de linha;
* `'\t'` → tabulação;
* `'\"'` → imprime uma aspa dupla.

Assim, o trecho:

```c
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
```

faz com que o programa pule uma linha, insira uma tabulação e imprima:

```text
        "Primeiro programa
```

No segundo `printf()`:

```c
printf("%c", "\"");
```

o formato `%c` espera um caractere, enquanto `"\""` representa uma string. Apesar dessa utilização incorreta, no ambiente utilizado o programa é executado e a aspa dupla é exibida.

Como não há `\n` ao final de `"Primeiro programa"`, a mensagem produzida por `system("PAUSE")` aparece imediatamente na mesma linha.

### Saída exata observada:

```text
        "Primeiro programa"Pressione qualquer tecla para continuar. . .
```

Portanto, os caracteres `'\n'`, `'\t'` e `'\"'` são interpretados como caracteres especiais quando utilizados como constantes de caractere com `%c`.