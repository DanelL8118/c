//ex7: capicuia

#include <stdio.h>

int main ()
{

int numero, milhar, centena, dezena, unidade;

//entrada do número

	printf("\ndigite o número que deseja verificar:\n");
	scanf("%d", &numero);

//condicionais

if (numero < 1000 || numero > 9999)
{
	printf("\nnúmero digitado não tem quatro digitos!\n");
}
else
{

//calculo

milhar = numero / 1000;
centena = (numero / 100) % 10;
dezena = (numero / 10) % 10;
unidade = numero % 10;

	if (milhar == unidade && centena == dezena)
	{
		printf("\n---RESULTADO---\no número %d é uma CAPICUIA\n", numero);
	}
	else
	{
		printf("\n---RESULTADO---\no número %d não é uma CAPICUIA\n", numero);
	}
}

return 0;

}






