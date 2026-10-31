#include <stdio.h>
#include <math.h>

void inverter (int *a, int n) {

int cont = n-1, teste=0; 
int *temp=&teste;

    for (int i=0; i<n/2; i++) {
        
        *temp = *(a+i);
        *(a+i) = *(a+cont);
        *(a+cont) = *temp;
        cont--;
    }

}

int main () {

int vetor[] = { 1, 2, 3, 4, 5 }, tamanho=0, i=0;
int *ptr = vetor;

tamanho = sizeof(vetor) / sizeof(vetor[0]);

printf("\n===Vetor normal===\n");

    for (i = 0; i < tamanho; i++) {

        printf(" %d |", *(ptr+i));
    }

printf("\n\n");

    inverter(vetor, tamanho);

printf("\n===Vetor invertido===\n");

    for (i = 0; i < tamanho; i++) {
    
        printf(" %d |", *(ptr+i));
    }

printf("\n\n");

return 0;

}