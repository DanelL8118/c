//exercicio 13

#include <stdio.h>

int main() {
    int M[4][4];
    int i, j, opcao;
    int sq_col1, soma_l3, soma_diag, soma_par_l2;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Imprimir todos os elementos da matriz\n");
        printf("2 - Somar os quadrados da primeira coluna\n");
        printf("3 - Somar todos os elementos da terceira linha\n");
        printf("4 - Somar os elementos da diagonal principal\n");
        printf("5 - Somar os elementos de indice par da segunda linha\n");
        printf("0 - Sair do programa\n");
        printf("==========================\n");
        printf("Escolha uma funcionalidade: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- MATRIZ RESTRUTURADA ---\n");
                for (i = 0; i < 4; i++) {
                    for (j = 0; j < 4; j++) {
                        printf("%4d ", M[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                sq_col1 = 0;
                for (i = 0; i < 4; i++) {
                    sq_col1 += (M[i][0] * M[i][0]);
                }
                printf("\nResultado: %d\n", sq_col1);
                break;

            case 3:
                soma_l3 = 0;
                for (j = 0; j < 4; j++) {
                    soma_l3 += M[2][j];
                }
                printf("\nResultado: %d\n", soma_l3);
                break;

            case 4:
                soma_diag = 0;
                for (i = 0; i < 4; i++) {
                    soma_diag += M[i][i];
                }
                printf("\nResultado: %d\n", soma_diag);
                break;

            case 5:
                soma_par_l2 = 0;
                for (j = 0; j < 4; j++) {
                    if (j % 2 == 0) {
                        soma_par_l2 += M[1][j];
                    }
                }
                printf("\nResultado: %d\n", soma_par_l2);
                break;

            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
