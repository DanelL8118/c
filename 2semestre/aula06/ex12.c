#include <stdio.h>
#include <stdlib.h>

struct no {

int valor;
struct no *prox;

};

struct no *inserirInicio ( struct no *inicio, int val) {

struct no *novo = (struct no*) malloc( sizeof(struct no));

    if (novo == NULL) { printf("\nErro ao alocar memória!\n"); return inicio; }

novo->valor = val;
novo->prox = inicio;

return novo;

}

void imprimir(struct no *inicio) {

struct no *atual = inicio;

    while (atual != NULL) {
        printf("%d | ", atual->valor);
        atual = atual->prox;
    }
printf("\n");

}

void liberar(struct no *inicio) {

struct no *atual = inicio;

    while ( atual != NULL ) {
        struct no *temp = atual->prox;
        free(atual);
        atual = temp;
    }
}

int main () {

struct no *inicio = NULL;

inicio = inserirInicio(inicio, 10);
inicio = inserirInicio(inicio, 20);
inicio = inserirInicio(inicio, 30);
inicio = inserirInicio(inicio, 40);

printf("\nLista: ");
    imprimir(inicio);

    liberar(inicio);
inicio = NULL;

return 0;

}