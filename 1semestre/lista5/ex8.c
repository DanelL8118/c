//exercicio 8

#include <stdio.h>

int main() {
    int MAT[10][15];
    int i, j, soma;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            MAT[i][j] = i + j + 1;
        }
    }

    printf("--- SOMA DAS LINHAS ---\n");
    for (i = 0; i < 10; i++) {
        soma = 0;
        for (j = 0; j < 15; j++) {
            soma += MAT[i][j];
        }
        printf("Linha %d: %d (%s)\n", i + 1, soma, (soma % 2 == 0) ? "par" : "impar");
    }

    printf("\n--- SOMA DAS COLUNAS ---\n");
    for (j = 0; j < 15; j++) {
        soma = 0;
        for (i = 0; i < 10; i++) {
            soma += MAT[i][j];
        }
        printf("Coluna %d: %d (%s)\n", j + 1, soma, (soma % 2 == 0) ? "par" : "impar");
    }

    return 0;
}
