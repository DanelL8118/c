//exercicio 4

#include <stdio.h>
#include <string.h>
#define N 10
#define V 30

int main () {

char nome[N][V], nome2[V];
int achei=0, i;

/*declaração de vetor com quantidade de nomes e tamanho de cada nome, respectivamente, além do nome a ser procurado e a váriavel para indicar
o resultado da busca*/

for (i=0; i<N; i++) {

	printf("\ndigite o nome:\n");
	fgets(nome[i], 29, stdin);
	nome[i][strcspn(nome[i], "\n")]=0;
}

//lastro de repetição para montar o vetor de nomes, utilizando a função fgets para nomes completos

	printf("\n=====FIM=====\n\n");

	printf("\ndigite qual nome deseja buscar:\n");
	fgets(nome2, 29, stdin);
	nome2[strcspn(nome2, "\n")]=0;

//entrada do nome que será procurado no vetor

	printf("\n\n-----NOMES LIDOS-----\n\n");

for (i=0; i<N; i++) {

	printf("\n%s", nome[i]);

	if(strcmp(nome[i], nome2)==0) { achei++; }

//condicional para comparar os nomes com o nome fornecido, armazenando 1 na variavel para ser usada depois

}

	printf("\n\n---------------------\n\n");

if (achei == 0) { printf("\nnome %s não encontrado!\n", nome2); }

else { printf("\nnome %s encontrado!\n", nome2); }

return 0;
}















