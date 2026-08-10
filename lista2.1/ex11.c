//categoria pela idade

#include <stdio.h>

int main ()

{

char nome[50];
int idade;

//entrada do nome e idade

	printf("digite o nome do nadador:\n");
	scanf("%s", nome);

	printf("digite a idade do %s:\n", nome);
	scanf("%d", &idade);

//resultado

if (idade < 0)
{
	printf("idade digitada inválida!\n");
}

else
{
	if (idade < 5)
	{
		printf("\nnadador %s muito jovem!\n", nome);
	}
	else if (idade <= 7)
	{
		printf("\nnadador %s na categoria A\n", nome);
	}
	else if (idade <= 10)
	{
		printf("\nnadador %s na categoria B\n", nome);
	}
	else if (idade <= 13)
	{
		printf("\nnadador %s na categoria C\n", nome);
	}
	else if (idade <= 18)
	{
		printf("\nnadador %s na categoria D\n", nome);
	}
	else if (idade > 18)
	{
		printf("\nnadador %s na categoria E\n", nome);
	}
}

return 0;

}



















