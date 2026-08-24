//ex2: maior de idade

#include <string.h>
#include <stdio.h>

int main ()

{

char nome[40];
int idade;

//entrada de dados

	printf("\ndigite o nome da pessoa:\n");
	fgets(nome, 40, stdin);
	nome[strcspn(nome, "\n")] = 0;

	printf("digite a idade de %s:\n", nome);
	scanf("%d", &idade);

//condicionais

if (idade < 0)
{
	printf("\nidade digitada é inválida!\n");
}
else
{
	if (idade < 18)
	{
		printf("\n%s tem %d anos e não é maior de idade\n", nome, idade);
	}
	if (idade >= 18)
	{
		printf("\n%s tem %d anos e é maior de idade\n", nome, idade);
	}
}

return 0;

}









