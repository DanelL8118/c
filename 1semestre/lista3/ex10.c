//ex10: imposto de renda

#include <stdio.h>
#include <string.h>

int main ()
{

char nome[20];
float salario, ir;

//entrada de dados

	printf("\ndigite o nome do funcionário:\n");
	fgets(nome, 20, stdin);
	nome[strcspn(nome, "\n")] = 0;

	printf("digite o salário do funcionário %s:\n", nome);
	scanf("%f", &salario);

//condicionais

if (salario < 0)
{
	printf("\no valor inserido é inválido!\n");
}
else
{
	if (salario <= 2428.80)
	{
		printf("\n---RESULTADO---\nfuncionário: %s \nisento de imposto de renda\n", nome);
	}
	else if (salario <= 2826.65)
	{
	ir = salario * 0.075;
		printf("\n---RESULTADO---\nfuncionário %s \nimposto de renda devido: R$ %.2f\n", nome, ir);
	}
	else if (salario <= 3751.05)
	{
	ir = salario * 0.15;
		printf("\n---RESULTADO---\nfuncionário %s \nimposto de renda devido: R$ %.2f\n", nome, ir);
	}
	else if (salario <= 4664.68)
	{
	ir = salario * 0.225;
		printf("\n---RESULTADO---\nfuncionário %s \nimposto de renda devido: R$ %.2f\n", nome, ir);
	}
	else if (salario > 4664.68)
	{
	ir = salario * 0.275;
		printf("\n---RESULTADO---\nfuncionário %s \nimposto de renda devido: R$ %.2f\n", nome, ir);
	}
}

return 0;

}














