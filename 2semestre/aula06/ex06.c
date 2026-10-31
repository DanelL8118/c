#include <stdio.h>

void minEmax (int *v, int n, int *max, int *min) {

    for (int i = 0; i < n; i++) {

        if ( *(v+i) > *max) { *max = *(v+i); }

        if ( *(v+i) < *min) { *min = *(v+i); }
    }

}

int main () {

int vetor[] = {7, -2, 15, 4, 9};
int min=1000, max=0, tamanho=0;

tamanho = sizeof(vetor) / sizeof(vetor[0]);

    minEmax(vetor, tamanho, &max, &min);

printf("\n===Valores===\nMaior valor: %d\nMenor valor: %d\n\n", max, min);

return 0;
    
}