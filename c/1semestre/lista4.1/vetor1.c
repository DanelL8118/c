//exercicio 1

#include <stdio.h>

int main () {

float vetor[20], soma=0;

for (int i=1; i<=10; i++) {

	printf("\ndigite o número:(%d)\n", i);
	scanf("%f", &vetor[i]);

soma += vetor[i];
}

	printf("\n\n---RESULTADO---\n soma = %.2f\n---------------\n\n", soma);

return 0;
}
















