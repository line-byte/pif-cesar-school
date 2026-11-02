01. a)O operador = é de atribuição e == é de comparação. Em if (x = 0): O valor 0 é atribuído a x, sobrescrevendo o valor anterior da variável.A expressão x = 0 tem como resultado o valor atribuído, ou seja, 0, como 0 é interpretado como falso, o bloco do if nunca é executado (o else, se existir, sempre será). Já em if (x == 0), o valor de x apenas é comparado com 0, sem ser modificado, e o bloco executa somente se x for realmente igual a 0.

b) Em ANSI C não existe tipo booleano nativo. A condição é qualquer expressão de tipo aritmético (inteiro ou real): Valor igual a zero (0, 0.0) → falso: o bloco do if é ignorado.
Valor diferente de zero (positivo ou negativo, inteiro ou real) → verdadeiro: o bloco do if é executado. Os operadores relacionais e lógicos (==, >, &&, ||, !) produzem 1 (verdadeiro) ou 0 (falso).

c) O bloco será executado, a instrução atribui -5 a x, e o resultado da expressão é -5.
-5 é diferente de zero, logo é avaliado como verdadeiro. Pelo padrão ANSI C, o if testa se a expressão de controle é diferente de zero; o sinal do número é irrelevante. Somente o 0 é falso.

02. a) Será impressa: Opção b, pois apesar da indentação sugerir que o else pertence ao primeiro if, o compilador ignora a indentação. O else se associa ao if (y > 10), o mais próximo. Como x > 10 é verdadeiro (15 > 10), entra-se no if interno; y > 10 é falso (5 > 10), então o else interno é executado, imprimindo "Opção B".

b) Em códigos sem chaves, a cláusula else sempre se associa ao if mais próximo anterior que ainda não possui else (problema conhecido como dangling else).

c) 
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}

03. a) O operador ternário tem a forma condição ? valor_se_verdadeiro : valor_se_falso. Primeiro avalia-se media >= 7.0: Se verdadeira, a expressão resulta em 'A' (Aprovado) e se falsa, resulta em 'R' (Reprovado); O resultado é então atribuído a situacao. Com media = 6.8, a condição 6.8 >= 7.0 é falsa, logo situacao recebe 'R'.

b)
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) Não, o ternário é uma expressão que produz um valor, e cada ramo deve ser uma expressão única. Limitações:não comporta blocos com múltiplos comandos (vários printf, atribuições, laços etc.) de forma legível; não permite declarar variáveis nem usar estruturas como for, while ou outro if de forma natural dentro dos ramos; os dois ramos devem ter tipos compatíveis, e o else é obrigatório e os encadeamentos de ternários prejudicam a legibilidade.

04. a) Saída exata:
Prata
Ouro

O programa salta para case 2 e imprime "Prata". Como não há break nesse caso, a execução continua para o case 3 e imprime "Ouro", parando somente no break desse caso. Por isso ocorre mais de uma impressão.

b) O break interrompe a execução do switch, transferindo o controle para a primeira instrução após o bloco. Quando é omitido, ocorre o efeito fall-through (queda/cascata): a execução prossegue para os case seguintes, independentemente de seus rótulos, até encontrar um break ou o fim do switch.

c) A expressão deve ser de tipo inteiro: int, char, short, long (e variações unsigned) e enum. Os rótulos case devem ser constantes inteiras. Também não é permitido usar float ou double, pois números de ponto flutuante têm representação aproximada (imprecisa), o que tornaria a comparação de igualdade exata dos case não confiável, e o padrão da linguagem exige tipo inteiro.

05. a) a = 0, b = 5, c = 8
a != 0 é falso (0 != 0). Como o operador && já tem resultado falso, a avaliação é interrompida e ++b não é executado, mantendo b = 5. A condição é falsa, então executa-se o else: c = 10 - 2 = 8.

b) É a técnica em que a linguagem avalia os operandos da esquerda para a direita e para assim que o resultado final já está determinado: && (E): se o operando da esquerda for falso, o resultado será falso, então o da direita não é avaliado. || (OU): se o operando da esquerda for verdadeiro, o resultado será verdadeiro, então o da direita não é avaliado.

c) a == 0 é verdadeiro. Como o operador é ||, o resultado já é verdadeiro e ++b não é executado. Executa-se o bloco do if: c += 10.
b = 5 (inalterado)
c = 20

06. a) 
Idoso
Adulto
Jovem

São impressas três mensagens porque os três if são independentes: 65 >= 60, 65 >= 18 e 65 >= 12 são todos verdadeiros, e cada condição é avaliada separadamente. O else pertence apenas ao último if (idade >= 12).

b) if independentes: cada condição é avaliada sempre, e vários blocos podem ser executados.
Cadeia else-if: as condições são avaliadas em sequência e de forma exclusiva. Assim que uma é verdadeira, seu bloco é executado e todas as demais são ignoradas. Apenas um bloco (no máximo) executa.

c) 
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}