//aprovado ou reprovado

#include <stdio.h>

int main ()
{

float N1, N2, media;

//entrada das notas

	printf("digite as duas notas:\n");
	scanf("%f %f", &N1, &N2);

//cálculo

	media = (N1+N2)/2;

//resultado

if (N1 > 10 || N1 < 0 || N2 > 10 || N2 < 0)
{
	printf("notas inseridas são inválidas!\n");
}
else
{
	if (media < 5)
	{
		printf("\naluno reprovado!\n");
	}
	if (5 <= media && media < 7)
	{
		printf("\naluno está de exame!\n");
	}
	if (media >= 7)
	{
		printf("\naluno aprovado!\n");
	}

}

return 0;

}








