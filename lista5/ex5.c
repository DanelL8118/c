//exercicio 5

#include <stdio.h>

#define N 20

int main () {

int vetor[N], vetor2[N], vetor3[N], vetor4[N], vetor5[N], i;

//definição de 5 vetores para cada um ter a operação desejada

	printf("\nprimeiro vetor\n");

for (i=0; i<N; i++) {

	printf("\ndigite o número:\n");
	scanf("%d", &vetor[i]);

}

//lastro para montagem do primeiro vetor

	printf("\nsegundo vetor\n");

for (i=0; i<N; i++) {

        printf("\ndigite o número:\n");
        scanf("%d", &vetor2[i]);

}

//lastro de repetição para montagem do segundo vetor

	printf("\n\n=====VETORES LIDOS=====\n");
	printf("\nvetor 1\n\n");

for (i=0; i<N; i++) { printf("%d ", vetor[i]);}

	printf("\nvetor 2\n\n");

for (i=0; i<N; i++) { printf("%d ", vetor2[i]); }

//lastros para mostrar os dois vetores lado a lado

	printf("\n\n=====RESULTADOS=====\n\n");

	printf("\n===== diferença =====\n");
for (i=0; i<N; i++) { printf("%d ", vetor3[i] = vetor[i]-vetor2[i]); }
	printf("\n=====   soma   =====\n");
for (i=0; i<N; i++) { printf("%d ", vetor4[i] = vetor[i]+vetor2[i]); }
	printf("\n===== multiplicação =====\n");
for (i=0; i<N; i++) { printf("%d ", vetor5[i] = vetor[i]*vetor2[i]); }

	printf("\n\n====================\n\n");

//lastros para mostrar os resultados já executando as operações para economizar

return 0;
}







