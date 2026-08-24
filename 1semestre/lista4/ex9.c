//exercicio 9

#include <stdio.h>
#include <string.h>

int main () {

char restaurante[30];
float nota, soma=0, media=0, cont=0;

	printf("\ndigite o nome do restaurante:\n");
	fgets(restaurante, 30, stdin);
	restaurante[strcspn(restaurante, "\n")]=0;

do {

	printf("\ndigite o valor da nota: (0 para sair)\n");
	scanf("%f", &nota);

if (nota == 0) {

	break;
}

while (nota < 1 || nota > 5) {

	printf("\nnota inserida inválida!\ndigite a nota novamente:\n");
	scanf("%f", &nota);
}

soma+=nota;
cont++;
}
while (nota != 0);

if (cont == 0) {

	printf("\nnenhuma nota inserida!, saindo...\n");
}

else {

media = soma/cont;

	printf("\n---RESULTADO---\nRestaurante: %s\nmédia das notas: %.2f\n", restaurante, media);
}

return 0;

}


















