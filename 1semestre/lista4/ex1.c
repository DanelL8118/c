//exercicio 1

#include <stdio.h>
#include <string.h>

int main () {

float nota;
char nome[40];

	printf("\ndigite o nome do aluno:\n");
	fgets(nome, 40, stdin);
	nome[strcspn(nome, "\n")] = 0;

	printf("\ndigite a nota do aluno:\n");
	scanf("%f", &nota);

while (nota < 0 || nota > 10) {

	printf("\nnota digita inválida!\ndigite a nota novamente:\n");
	scanf("%f", &nota);

}

	printf("\nnota %.2f registrada para o aluno %s\n", nota, nome);

return 0;

}
