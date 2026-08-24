//exercicio 10

#include <stdio.h>

int main() {
    int LINHAS = 3;
    int COLUNAS = 2;
    int original[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int transposta[2][3];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            transposta[j][i] = original[i][j];
        }
    }

    printf("--- MATRIZ ORIGINAL ---\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", original[i][j]);
        }
        printf("\n");
    }

    printf("\n--- MATRIZ TRANSPOSTA ---\n");
    for (i = 0; i < COLUNAS; i++) {
        for (j = 0; j < LINHAS; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
