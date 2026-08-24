//exercicio 7

#include <stdio.h>

int teste (float a[], float b[], int c) {

int result=0, i;

	for (i=0; i<c; i++) { if (a[i] == b[i]) { result++; } }
return result;
}

//função que compara todos os dados e soma o contador se for igual

int main () {

int igual=0, i, quant;


//declaração de variavel de tamanho de vetor e contador para os lastros de repetição

	printf("\ndigite o tamanho do vetor:\n");
	scanf("%d", &quant);

float vetor[quant], vetor2[quant];

//declaração de vetores depois de saber o tamanho

	printf("\n===VETOR 1====\n");

for (i=0; i<quant; i++) {

	printf("\ndigite o valor:\n");
	scanf("%f", &vetor[i]);
}

	printf("\n===VETOR 2===\n");

for (i=0; i<quant; i++) {

        printf("\ndigite o valor:\n");
        scanf("%f", &vetor2[i]);
}

//Montagem dos dois vetores

igual = teste(vetor, vetor2, quant);

//chama a função

	printf("\n\n=====RESULTADO=====\n\n");

if (igual != quant) { printf("\nos vetores são diferentes!\n"); }

else { printf("\nos vetores são iguais!\n"); }

	printf("\n\n===================\n\n");

//se o resultado da função for igual ao tamanho do vetor, dá certo

return 0;
}













