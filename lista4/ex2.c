//Exercicio 2

#include <stdio.h>

int main () {

float valor, valorM=0, cont=1;

for(int i=1; i<=50; i++) {

	printf("\n%.0f - digite o valo da cpu(em porcentagem):\n", cont);
	scanf("%f", &valor);

cont++;

if (valor > valorM) {

valorM = valor;

}

}

	printf("\n---RESULTADO---\nmaior valor registrado: %.2f\n", valorM);

return 0;

}
