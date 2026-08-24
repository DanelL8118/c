//ex6: desconto de mensalidade

#include <stdio.h>

int main ()
{

char nome[20];
float mensalidade, nota, final;

//entrada de valores

	printf("digite o nome do aluno:\n");
	scanf("%s", nome);

	printf("digite o valor da mensalidade:\n");
	scanf("%f", &mensalidade);

	printf("digite a nota do aluno no semestre anterior:\n");
	scanf("%f", &nota);

//condicionais

if (nota < 0 || nota > 10)
{
	printf("nota inserida é inválida!\n");
}

else
{
	if (nota < 4.0)
	{
		printf("\no aluno %s, pagará %.1f, pertencendo ao conceito E\n", nome, mensalidade);
	}
	else if (nota <= 6.0)
	{
		printf("\no aluno %s, pagará %.1f, pertencendo ao conceito D\n", nome, mensalidade);
	}
	else if (nota <= 7.5)
	{
		final = mensalidade * 0.95;
		printf("\no aluno %s, pagará %.1f, pertencendo ao conceito C\n", nome, final);
	}
	else if (nota <= 9.0)
	{
		final = mensalidade * 0.90;
		printf("\no aluno %s, pagará %.1f, pertencendo ao conceito B\n", nome, final);
	}
	else if (nota <= 10.0)
	{
		final = mensalidade * 0.85;
		printf("\no aluno %s, pagará %.1f, pertencendo ao conceito A\n", nome, final);
	}
}

return 0;

}
