### Questão 05

Valores iniciais:

```text
i = 1
j = 2
k = 3
n = 2
x = 3.3
y = 4.4
```

---

**a) `i < j + 3`**

Primeiro calculo `j + 3`:

```text
2 + 3 = 5
```

Depois:

```text
1 < 5 → verdadeiro
```

**Resultado: `1`**

---

**b) `2 * i - 7 <= j - 8`**

Primeiro calculo as operações aritméticas:

```text
2 * 1 - 7 = 2 - 7 = -5
```

E:

```text
2 - 8 = -6
```

Então:

```text
-5 <= -6 → falso
```

**Resultado: `0`**

---

**c) `-x + y >= 2.0 * y`**

Primeiro calculo:

```text
-x + y = -3.3 + 4.4 = 1.1
```

E:

```text
2.0 * y = 2.0 * 4.4 = 8.8
```

Então:

```text
1.1 >= 8.8 → falso
```

**Resultado: `0`**

---

**d) `x == y`**

Comparo os valores:

```text
3.3 == 4.4 → falso
```

**Resultado: `0`**

---

**e) `!(n - j)`**

Primeiro calculo:

```text
n - j = 2 - 2 = 0
```

Depois aplico `!`:

```text
!0 = 1
```

**Resultado: `1`**

---

**f) `!n - j`**

O operador `!` tem maior precedência que `-`, então primeiro calculo:

```text
!n
!2 = 0
```

Depois:

```text
0 - 2 = -2
```

Como a expressão não possui uma comparação ou operador lógico no final, o resultado numérico da expressão é:

**Resultado: `-2`**

---

**g) `i && j && k`**

Primeiro verifico os valores:

```text
i = 1 → verdadeiro
j = 2 → verdadeiro
k = 3 → verdadeiro
```

Então:

```text
1 && 2 && 3 → verdadeiro
```

**Resultado: `1`**

---

**h) `i || j - 3 && k`**

Primeiro faço a operação aritmética:

```text
j - 3 = 2 - 3 = -1
```

O `&&` possui maior precedência que `||`, então:

```text
-1 && 3 → verdadeiro
```

Como qualquer valor diferente de zero é verdadeiro:

```text
1 || 1 → verdadeiro
```

**Resultado: `1`**

---

**i) `i < j && 2 >= k`**

Primeiro avalio as expressões relacionais:

```text
1 < 2 → verdadeiro
```

E:

```text
2 >= 3 → falso
```

Então:

```text
1 && 0 → falso
```

**Resultado: `0`**

---

**j) `i == 2 || j == 4 || k == 5`**

Avalio cada comparação:

```text
1 == 2 → falso
2 == 4 → falso
3 == 5 → falso
```

Então:

```text
0 || 0 || 0 → falso
```

**Resultado: `0`**

### Respostas finais

| Item | Resultado |
| ---- | --------: |
| a)   |     **1** |
| b)   |     **0** |
| c)   |     **0** |
| d)   |     **0** |
| e)   |     **1** |
| f)   |    **-2** |
| g)   |     **1** |
| h)   |     **1** |
| i)   |     **0** |
| j)   |     **0** |
