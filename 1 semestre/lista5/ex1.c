//exercicio 1

#include <stdio.h>
#define N 10

int main () {

int vetor[N];

//declarar apenas o vetor, pela necessidade de apenas mostra-lo

for (int i=1; i<=N; i++) {

	printf("\ndigite o número:(%d)\n", i);
	scanf("%d", &vetor[i]);
}

//lastro de repetição para montagem do vetor, de 1 até 10

	printf("\n\n------Vetor Lido-------\n");
	printf("\n\nesquerda para direita:\n");

for (int i=1; i<=N; i++) {

	printf("%d ", vetor[i]);
}

//exibição do vetor da esquerda para direita, somando para mostrar da primeira a ultima posição

	printf("\ndireita para esquerda:\n");

for (int i=N; i>=1; i--) {

	printf("%d ", vetor[i]);
}

	printf("\n\n-----------------------\n");

//exibição do vetor da direita para esquerda, subtraindo para mostrar da ultima até a primeira posição

return 0;
}












