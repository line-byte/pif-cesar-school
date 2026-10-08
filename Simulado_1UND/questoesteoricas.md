01. Questão
    alternativa c. Em C, maiúsculas e minúsculas são caracteres diferentes, então valor/VALOR, peso/Peso e taxa/TAXA são identificadores distintos.
a) Falsa: numero e Numero são variáveis diferentes.
b) Falsa: o ponto de entrada é main, em minúsculas.
d) Falsa: a sensibilidade a caixa é regra da linguagem, não do sistema operacional.

02. Questão
os três erros principais são:
int Main(): o ponto de entrada deve ser main, em minúsculas. Com Main o programa não tem função de entrada.
printf( A idade do aluno eh: %d anos.. , idade);: a string não está entre aspas. O correto é printf("A idade do aluno eh: %d anos.\n", idade);.
cout << endl;: isso é C++, não C, e não existe em C. A quebra de linha é feita com \n no printf.

03. Questão
Valores finais: a = 56, b = 45, c = 13, d = 10.

04. Questão
a) 1; b) 1; c) 1; d) 1; e) 1.

05. Questão
a) o while testa a condição antes do bloco, então pode executar 0 vezes. O do-while executa o bloco e testa depois, então executa pelo menos 1 vez.

b) o for é mais elegante quando o número de repetições é conhecido ou controlado por um contador. Ele reúne inicialização, teste e incremento no cabeçalho, o que deixa o código mais curto e evita esquecer o incremento. Exemplos: contar de 1 a 100, percorrer vetores, tabuadas.

c) eh um erro de lógica, não de compilação. O ; vira uma instrução vazia, que é o corpo do laço. Se condicao for verdadeira, nada dentro do laço a altera, então o programa testa a condição repetidamente e entra em laço infinito. O bloco { } escrito abaixo não faz parte do laço.

06. Questão
a) soma foi declarada dentro do bloco do for, então só existe ali. Fora do laço, o printf não a enxerga e o compilador emite o erro 'soma' undeclared.

b) o laço vai de i = 1 a 10, mas:
i = 1, 2, 3, 4: executam normalmente.
i = 5: o continue pula o resto do corpo e vai para o i++.
i = 6, 7: executam normalmente.
i = 8: o break encerra o laço. As iterações 8, 9 e 10 não executam o corpo.
Iterações que executam o corpo completo: 1, 2, 3, 4, 6 e 7.

c)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

Cálculo: 1 + 4 + 9 + 16 + 36 + 49 = 115.
Saída: Soma final = 115

(não coloquei nenhuma questão 07, pois o professor não a colocou no documento)