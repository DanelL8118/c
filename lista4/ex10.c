//exercicio 10

#include <stdio.h>

int main () {

int tabu, inicio, final, resultado;

	printf("\ndigite a tabuada que deseja:\n");
	scanf("%d", &tabu);
	printf("\ndigite o primeiro número:\n");
	scanf("%d", &inicio);
	printf("\ndigite o ultimo número:\n");
	scanf("%d", &final);

while (inicio > final) {

	printf("\nintervalo inserido inválido!\ndigite novamente:\n");
	scanf("%d", &inicio);
}

for (int i = inicio; i <= final; i++) {

	printf("\n%d x %d = %d", tabu, i, resultado = tabu*i);
}

printf("\n");

return 0;
}
