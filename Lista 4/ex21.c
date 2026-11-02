#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, percentual, aumento, novo;
    int cargo;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico; 2 = Gerente; 3 = Demais Cargos): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000)
                percentual = 15;
            else
                percentual = 10;
            break;
        case 2:
            if (salario <= 5000)
                percentual = 10;
            else
                percentual = 5;
            break;
        case 3:
            percentual = 8;
            break;
        default:
            percentual = -1;
    }

    if (percentual < 0) {
        printf("Erro: código de cargo inválido!\n");
    } else {
        aumento = salario * percentual / 100;
        novo = salario + aumento;
        printf("Aumento de %.0f%%: R$ %.2f\n", percentual, aumento);
        printf("Novo salário: R$ %.2f\n", novo);
    }

    system("PAUSE");
    return 0;
}