//exercicio 2

#include <stdio.h>

int main () {

int numero, i, impar=0, par=0, imp=0, p=0, c, aux;

//definição de variaveis para descobrir o número de pares e impares no vetor

	printf("\ndigite a quantidade de valores:\n");
	scanf("%d", &numero);

int vetor[numero];

for (i=0; i<numero; i++) {

	printf("\ndigite o valor:\n");
	scanf("%d", &vetor[i]);

	if (vetor[i]%2!=0) { impar++; }
	else { par++; }
}

//montagem do vetor principal e contagem de pares e impares

int vetor2[par], vetor3[impar];

//definição de demais vetores conforme número de pares e ímpares

for (i=0; i<numero; i++) {

	if (vetor[i]%2!=0) { vetor3[imp] = vetor[i]; imp++; }
	else { vetor2[p] = vetor[i]; p++; }
}

//atribuindo valores para os devidos vetores, utilizando contadores para não travar a mémoria

for (i=0; i<p; i++) {
        for (c=0; c<p; c++) {

		if (vetor2[i] < vetor2[c]) {

		aux = vetor2[i];
		vetor2[i] = vetor2[c];
		vetor2[c] = aux;
		}
	}
}

for (i=0; i<imp; i++) {
        for (c=0; c<imp; c++) {

                if (vetor3[i] > vetor3[c]) {

                aux = vetor3[i];
                vetor3[i] = vetor3[c];
                vetor3[c] = aux;
                }
        }
}

//colocando em ordem com lastros de repetição e variavel auxiliar para permitir a ordenação

	printf("\n\n=====RESULTADO=====\n\n");

	printf("\n=====VETOR=====\n");
for (i=0; i<numero; i++) { printf("%d ", vetor[i]); }
	printf("\n=====PARES=====\n");
for (i=0; i<par; i++) { printf("%d ", vetor2[i]); }
	printf("\n=====IMPARES===\n");
for (i=0; i<impar; i++) { printf("%d ", vetor3[i]); }

	printf("\n\n===================\n\n");

return 0;
}
