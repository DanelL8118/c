//exercicio 9

#include <stdio.h>

int main() {
    float matriz[50][50];
    float vetor[50];
    int i, j;

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            matriz[i][j] = (float)(i + j) * 1.5f;
        }
    }

    for (i = 0; i < 50; i++) {
        vetor[i] = matriz[i][i];
    }

    printf("--- DIAGONAL PRINCIPAL ---\n");
    for (i = 0; i < 50; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
