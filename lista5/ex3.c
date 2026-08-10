//exercicio 3

#include <stdio.h>
#define N 10

int main () {

int vetor[N], vetor2[N];

//declarar os vetores para permitir a troca

for (int i=0; i<N; i++) {

	printf("\ndigite o número:\n");
	scanf("%d", &vetor[i]);
}

//lastro de repetição para montagem do vetor, de 1 até 10

for (int i=0; i<N; i++) {

	if (vetor[i]%2==0) { vetor2[i] = vetor[i]>>1; }
	else { vetor2[i] = vetor[i]*3; }
}

/*lastro de repetição para multiplicar e dividir com base em condicionais de par
e impar, armazenando os novos valores no vetor 2*/

        printf("\n\n------Vetor Lido-------\n");
	printf("vetor 1\n");

for (int i=0; i<N; i++) {

	printf("%d |", vetor[i]);
}

	printf("\nvetor 2\n");

for (int i=0; i<N; i++) {

	printf("%d |", vetor2[i]);
}

	printf("\n\n-----------------------\n");

return 0;
}












