## Questão 01

### a) Qual é o valor numérico que será efetivamente exibido no console?

O valor exibido será:

```text
O valor armazenado eh: 2
```

Portanto, o valor armazenado na variável `valor_inteiro` será **2**.

### b) Por que isso ocorre? Qual é o nome do fenômeno?

Isso ocorre porque a variável `valor_inteiro` foi declarada como `int`, que armazena apenas valores inteiros, mas recebeu o valor `2.97`, que é um número de ponto flutuante.

Ao realizar essa atribuição, a parte decimal do valor é descartada, fazendo com que `2.97` seja convertido para `2`. Esse processo é chamado de **conversão implícita de tipos**, também conhecida como **coerção implícita**. Nesse caso específico, ocorre um **truncamento da parte fracionária**.

### c) Como esse comportamento pode ser evitado ou controlado?

O programador pode declarar a variável como `float` ou `double` caso precise manter a parte decimal do valor. Por exemplo:

```c
double valor = 2.97;
```

Se a intenção for obter um valor inteiro por meio de **arredondamento**, é necessário utilizar uma função apropriada, como `round()`, da biblioteca `math.h`:

```c
double valor = 2.97;
int resultado = (int)round(valor);
```

Nesse caso, o resultado será `3`.

Portanto, para manter a precisão, deve-se utilizar um tipo de ponto flutuante (`float` ou `double`). Para obter um inteiro arredondado, deve-se realizar o arredondamento explicitamente antes da conversão.
