//exercicio 3

#include <stdio.h>

int main () {

float ms, soma=0, media=0, cont=1, i;

for (i=1; i<=50; i++) {

	printf("\n%.0f - digite o valor da resposta:(ms)\n", cont);
	scanf("%f", &ms);

soma += ms;
cont++;

}

media = soma/50;

	printf("\n---RESULTADO---\nsoma dos valores: %.2f\nmédia dos valores: %.2f\n", soma, media);

return 0;

}
