#include <stdio.h>
#include <stdlib.h>

void imprimirVetor (int *v, int n) {

printf("\n===VETOR===\n");

    for (int i=0; i<n; i++) {

        printf("%d |", *(v + i));
    }

printf("\n");

}

void preencherVetor (int *v, int n) {

    for (int i=0; i < n; i++) {

        *(v+i) = rand() % 100;
    }

printf("\nVetor preenchido!\n");

}

int realocarVetor (int *v, int *n) {

printf("\nDigite o novo tamanho do vetor: ");
scanf("%d", &*n);
    while (*n < 0) {
        printf("\nDigite um valor válido: ");
        scanf("%d", &*n);
    }

v = (int*) realloc(v, *n * sizeof(int));

    if (v == NULL) { printf("\nErro na alocação de memória!"); return 1; }

    preencherVetor(v, *n);

printf("\nVetor realocado!\n");

}

int main () {

int n=0, opc=0;

printf("Digite o tamanho do vetor que deseja: ");
scanf("%d", &n);

int *v = (int*) malloc(n * sizeof(int));

    if (v == NULL) { printf("\nErro na alocação de memória!"); return 1; }

    preencherVetor(v, n);

    do {

        printf("\n===MENU===\n[ 1 ] - Imprimir vetor\n[ 2 ] - Redefinir tamanho do vetor\n[ 0 ] - Sair\nDigite a opção que deseja: ");
        scanf("%d", &opc);
            while ( opc < 0 || opc > 2) { 
                printf("\nDigite uma opção válida: ");
                scanf("%d", &opc);
            }

            if ( opc == 1 ) { imprimirVetor(v, n); }

            if ( opc == 2 ) { realocarVetor(v, &n); }

} while (opc != 0);

free(v);

return 0;

} 