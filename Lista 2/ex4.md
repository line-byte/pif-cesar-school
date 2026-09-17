### Questão 04

Inicialmente:

```c
int a = 1, b = 2, c = 3, d = 4;
```

Portanto:

```text
a = 1
b = 2
c = 3
d = 4
```

**1. `a += b + c;`**

Primeiro calculo `b + c`:

```text
b + c = 2 + 3 = 5
```

Depois:

```text
a += 5
a = 1 + 5
a = 6
```

Valores:

```text
a = 6
b = 2
c = 3
d = 4
```

---

**2. `b *= c = d + 2;`**

Primeiro calculo:

```text
d + 2 = 4 + 2 = 6
```

Então:

```text
c = 6
```

Depois:

```text
b *= c
b = 2 * 6
b = 12
```

Valores:

```text
a = 6
b = 12
c = 6
d = 4
```

---

**3. `d %= a + a + a;`**

Primeiro calculo:

```text
a + a + a = 6 + 6 + 6 = 18
```

Então:

```text
d %= 18
d = 4 % 18
d = 4
```

Como 4 é menor que 18, o resto da divisão é 4.

Valores:

```text
a = 6
b = 12
c = 6
d = 4
```

---

**4. `d -= c -= b -= a;`**

Os operadores de atribuição são avaliados da direita para a esquerda.

Primeiro:

```text
b -= a
b = 12 - 6
b = 6
```

Depois:

```text
c -= b
c = 6 - 6
c = 0
```

Por fim:

```text
d -= c
d = 4 - 0
d = 4
```

Valores:

```text
a = 6
b = 6
c = 0
d = 4
```

---

**5. `a += b += c += 7;`**

Novamente, os operadores de atribuição são avaliados da direita para a esquerda.

Primeiro:

```text
c += 7
c = 0 + 7
c = 7
```

Depois:

```text
b += c
b = 6 + 7
b = 13
```

Por fim:

```text
a += b
a = 6 + 13
a = 19
```

### Valores finais

```text
a = 19
b = 13
c = 7
d = 4
```

Portanto, os valores finais são:

**a = 19, b = 13, c = 7 e d = 4.**
