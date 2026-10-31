#include <stdio.h>

int soma (int *v, int n) {

int resultado=0;

    for ( int i = 0; i < n; i++) {

        resultado += *(v + i);
    }

return resultado;

}

int main () {

int vetor[] = {5, 10, 15, 20}, resultado=0, tamanho=0;
    
printf("Valores do vetor: %d, %d, %d, %d", vetor[0], vetor[1], vetor[2], vetor[3]);

tamanho = sizeof(vetor) / sizeof(vetor[0]);
resultado = soma(vetor, tamanho);
    
printf("\nResultado da soma: %d\n", resultado);

return 0;

}