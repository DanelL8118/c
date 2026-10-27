#include <stdio.h>

/*

void limitar (int valor, int minimo, int maximo) {
    
    if (valor < minimo) valor = minimo;

    if (valor > maximo) valor = maximo;

}

int main(void) {

    int nota = 150;

        limitar (nota, 0, 100);
        printf("\nnota = %d\n", nota); //esperado: 100

    return 0;

} */

//CORRIGIDO:

#include <stdio.h>

void limitar (int *valor, int minimo, int maximo) {
    
    if (*valor < minimo) *valor = minimo;

    if (*valor > maximo) *valor = maximo;

}

int main(void) {

    int nota = 150;

        limitar (&nota, 0, 100);
        printf("\nnota = %d\n", nota); //esperado: 100

    return 0;

}