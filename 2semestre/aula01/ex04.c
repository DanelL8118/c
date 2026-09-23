//EXERCICIO 4 - FUNÇÃO DE ASTERISTICOS

#include <stdio.h>
#include <string.h>

void asteristico () {

    printf("\n*****************************\n");

}

int main () {

    char nome[40];

    printf("\nDigite seu nome: \n");
    fgets(nome, 40, stdin);
    nome[strcspn(nome, "\n")]=0;

    asteristico();

    printf("\nBem vindo! %s\n", nome);

    asteristico();


    return 0;
}