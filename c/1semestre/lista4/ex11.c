//exercicio 11

#include <stdio.h>

int main () {

int numero, nbaixo=99999, nalto=0, cont;
float alt, baixo=3, alto=0;

do {

	printf("\ndigite o código do aluno:(0 para sair)\n");
	scanf("%d", &numero);
if (numero == 0) {

break;
}
	printf("\ndigite a altura do aluno:\n");
	scanf("%f", &alt);

while (numero < 0 || alt < 0) {

	printf("\ndados inválidos!\ndigite o código novamente:");
	scanf("%d", &numero);

	printf("\ndigite a altura novamente:\n");
	scanf("%f", &alt);
}

if (alt < baixo) {

nbaixo = numero;
baixo = alt;
}

if (alt > alto) {

nalto = numero;
alto = alt;
}

cont++;
}
while (numero != 0);

if (cont > 0) {
	printf("\n---RESULTADO---\naluno mais alto:\ncódigo: %d\naltura: %.2f\n\naluno mais baixo:\ncódigo: %d\naltura: %.2f\n", nalto, alto, nbaixo, baixo);
}

else {

	printf("\nnenhum aluno inserido!\n");
}

return 0;
}













