//aprovado ou reprovado

#include <string.h>
#include <stdio.h>

int main ()
{

char nome[30];
float n1, n2, media;

//entrada das notas

	printf("\ndigite o nome do aluno:\n");
	fgets(nome, 30, stdin);
	nome[strcspn(nome, "\n")] = 0;

	printf("digite as duas notas:\n");
	scanf("%f %f", &n1, &n2);

//cálculo

	media = ((n1*2)+(n2*3))/5;

//resultado

if (n1 > 10 || n1 < 0 || n2 > 10 || n2 < 0)
{
	printf("\nnotas inseridas são inválidas!\n");
}
else
{
	if (media < 3)
	{
		printf("\n---RESULTADO---\nnota do aluno: %.1f\naluno %s reprovado!\n", media, nome);
	}
	else if (media < 7)
	{
		printf("\n---RESULTADO---\nnota do aluno: %.1f\naluno %s está de recuperação!\n", media, nome);
	}
	else if (media <= 10)
	{
		printf("\n---RESULTADO---\nnota do aluno: %.1f\naluno %s aprovado!\n", media, nome);
	}

}

return 0;

}

