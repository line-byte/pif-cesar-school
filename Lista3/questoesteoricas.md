1. Questão
a) while: testa a condição antes de executar o bloco. Se a condição for falsa logo na primeira verificação, o bloco nunca é executado (mínimo de 0 execuções).
do-while: executa o bloco primeiro e só depois testa a condição (no final). Por isso o bloco é executado pelo menos 1 vez, mesmo que a condição seja falsa desde o início (mínimo de 1 execução).

b) for: é melhor de usar quando o número de repetições é conhecido ou controlado por um contador, pois reúne inicialização, teste e incremento em uma única linha. Exemplo: percorrer de 0 a 100, tabuadas, percorrer vetores.
while: é o ideal quando o número de repetições é desconhecido e o laço pode nem precisar executar. Exemplo: ler valores até o usuário digitar um sentinela, ou processar dados enquanto houver entrada.
do-while: se usa quando o bloco precisa executar ao menos uma vez. Exemplos típicos: menus interativos, validação de entrada (pedir o dado e repetir se for inválido).

c) é um erro de lógica, e não de compilação. O código compila normalmente, porque o ; é interpretado como uma instrução vazia (laço sem corpo), se condição for verdadeira, ocorre o seguinte: o programa testa a condição, executa o corpo vazio (que não faz nada), testa a condição novamente, e assim por diante. Como nada dentro do laço altera a variável testada, a condição permanece verdadeira para sempre, gerando um laço infinito. O bloco { ... } escrito logo abaixo não faz parte do laço: ele é executado apenas uma vez, se o laço terminar (o que não acontece).

2. Questão
a) a variável soma foi declarada dentro do bloco do 'for', então só existe ali. Quando o printf tenta usá-la fora do laço, o compilador não a enxerga e emite o erro 'soma' undeclared.

b) int soma = 0; dentro do laço é executado a cada iteração. A variável é criada, zerada, recebe i * i e é destruída ao fim do bloco. Ela nunca acumula nada, e o valor impresso seria apenas o quadrado de i (1, 4, 9...), não a soma.

c)código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // declarada fora do laço

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);   // 285
    system("PAUSE");
    return 0;
}

-Escopo de bloco: uma variável declarada entre { } só é visível dentro desse bloco.
-Tempo de vida: a variável de bloco é criada quando o fluxo entra no bloco e destruída quando ele termina. Em um laço, isso acontece a cada iteração.
-Visibilidade: para que a variável seja usada antes, durante e depois do laço, ela deve ser declarada em um bloco externo, como a main.

3. Questão
a) saída do trecho A: 36 18 9 4 2 1 (separados por tabulação).

b) o trecho B lê um caractere do teclado sem exibi-lo (getch()) e imprime o caractere seguinte na tabela ASCII (ch + 1). Por exemplo, digitar A imprime B, e digitar a imprime b. O laço termina quando o usuário digita X, já s parênteses são necessários por causa da precedência: o operador != tem precedência maior que =. Sem parênteses, ch = getch() != 'X' seria avaliado como ch = (getch() != 'X'). Nesse caso, ch receberia 0 ou 1 (o resultado da comparação) em vez do caractere digitado.

c) o laço infinito pode ser interrompido por dentro, usando uma condição com:
-break; (sai do laço),
-return; (sai da função), ou
-exit(0); (encerra o programa).

04. Questão
a) o break encerra imediatamente o laço mais interno em que está. O programa ignora o resto do bloco e a verificação da condição, e segue para a primeira instrução após o laço.

b) o continue pula o restante do corpo da iteração atual e vai para a próxima iteração. No for, a expressão executada logo após o continue é o incremento (terceira expressão). Em seguida vem o teste da condição.

c) o break interrompe somente o laço interno, que é o que o contém. O laço externo continua normalmente com sua próxima iteração.

05. Questão
a) o laço executa 5 iterações. Ele para quando i = 5 e j = 5, porque 5 < 5 é falso.

b)
i = 0, j = 10| soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c)
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}

06. Questão
a) o valor impresso é Valor final de x = 6.

b) No pós-fixado, o x++ usa o valor atual na comparação e depois incrementa
| Teste | Comparação | Resultado  | x após |
-------------------------------------------
| 1º    | 0 < 5      | verdadeiro | 1     |
| 2º    | 1 < 5      | verdadeiro | 2     |
| 3º    | 2 < 5      | verdadeiro | 3     |
| 4º    | 3 < 5      | verdadeiro | 4     |
| 5º    | 4 < 5      | verdadeiro | 5     |
| 6º    | 5 < 5      | **falso**  | **6** |

c) 
int x = 0;
while (x <= 5) {
    x++;
}
printf("Valor final de x = %d\n", x);   // 6