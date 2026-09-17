# Questão 07

### a) Código:
```c
printf("\n\tBom dia! Shirley.");
```

Saída:

```text
    Bom dia! Shirley.
```

Há primeiro uma quebra de linha (`\n`) e, em seguida, uma tabulação (`\t`) antes da mensagem.


### b) Código:
```c
printf("Você já tomou café? \n");
```

Saída:
```text
Você já tomou café? 
```

Após a mensagem ocorre uma quebra de linha (`\n`).


### c) Código:
```c
printf("\n\nA solução não existe!\nNão insista.");
```

Saída:
```text


A solução não existe!
Não insista.
```

Há duas quebras de linha antes da primeira mensagem e uma quebra de linha entre as duas frases.

### d) Código:
```c
printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
```

Saída:
```text
Duas    linhas    de    saída
ou    uma?
```

Os caracteres `\t` produzem tabulações entre as palavras e `\n` produz uma quebra de linha.


### e) Código:
```c
printf("%s\n%s\n%s\n", "um", "dois", "três");
```
Saída:
```text
um
dois
três
```
O especificador `%s` é utilizado para imprimir textos (strings), e cada `\n` produz uma quebra de linha.