//exercicio 2

#include <stdio.h>
#define N 10

int main () {

int vetor[N], vetor2[N], cont=0;

//declarar os vetores e um contador para permitir a troca

for (int i=1; i<=N; i++) {

	printf("\ndigite o número:(%d)\n", i);
	scanf("%d", &vetor[i]);
}

//lastro de repetição para montagem do vetor, de 1 até 10

for (int i=N; i>=1; i--) {

cont++;
vetor2[cont] = vetor[i];
}

//enquanto um contador aumenta, o outro diminui, fazendo com que os valores sejam armazenados ao contrário

        printf("\n\n------Vetor Lido-------\n");
	printf("vetor 1\n");

for (int i=1; i<=N; i++) {

	printf("%d |", vetor[i]);
}

//Mostragem do vetor original

	printf("\nvetor 2\n");

for (int i=1; i<=N; i++) {

	printf("%d |", vetor2[i]);
}

//mostragem do vetor invertido

	printf("\n\n-----------------------\n");

return 0;
}












