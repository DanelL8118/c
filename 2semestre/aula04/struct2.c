#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 8

typedef struct {

int cod;
int ano;
float preco;
char titulo[50];
char autor[50];

} livro;

void listar (livro vetor []) {

int i=0;   
    
    for (i = 0 ; i < TAM ; i++) {

        printf("\n====LIVRO %d====\ncódigo: %d\nTítulo: %s\nAutor: %s\nAno de lançamento: %d\nPreço: R$ %.2f\n", i+1, vetor[i].cod, vetor[i].titulo, vetor[i].autor, vetor[i].ano, vetor[i].preco);

    }

}

void maiorPreco ( livro vetor[] ) {

int i=0, maior=0, posi=0;

    for ( i = 0 ; i < TAM ; i++ ) {

        if (vetor[i].preco > maior) { posi = i; maior = vetor[i].preco; }
        
    }

    printf("\n====MAIOR PREÇO====\nNome do livro: %s\nPreço: R$ %.2f\n", vetor[posi].titulo, vetor[posi].preco);

}

void media ( livro vetor [] ) {


int i=0; 
float soma=0;

    for ( i = 0 ; i < TAM ; i++) {

        soma += vetor[i].preco;

    }

    printf("\n====MEDIA DE PREÇO====\nA média dos preços é igual a: R$ %.2f", soma/TAM);

}

int main () {

int opc=0, i=0;
livro vetor[TAM];

    for (i = 0; i < TAM ; i++) {

        printf("\n====LIVRO %d====", i+1);

        printf("\nDigite o código do livro: ");
        scanf("%d", &vetor[i].cod);
        
        printf("\nDigite o Título do livro: ");
        scanf(" %[^\n]", vetor[i].titulo);
          
        printf("\nDigite o nome do autor: ");
        scanf(" %[^\n]", vetor[i].autor);
        
        printf("\nDigite o ano de lançamento: ");
        scanf("%d", &vetor[i].ano);
        
        printf("\nDigite o valor do livro: R$ ");
        scanf("%f", &vetor[i].preco);
        
    }

    do {

        printf("\n====MENU====\n[ 1 ] - LISTAR LIVROS\n[ 2 ] - MAIOR PREÇO\n[ 3 ] - MÉDIA DE VALORES\n[ 0 ] - SAIR\nDigite a opção que deseja: ");
        scanf("%d", &opc);

            while ( opc < 0 || opc > 3) { 

                printf("\nDigite uma opção válida! : ");
                scanf("%d", &opc);

            }

    if (opc == 1) { listar(vetor); }

    if (opc == 2) { maiorPreco(vetor); }

    if (opc == 3) { media(vetor); }

    if (opc == 4) { printf("\nSaindo..."); }

    } while (opc != 0);

return 0;

}