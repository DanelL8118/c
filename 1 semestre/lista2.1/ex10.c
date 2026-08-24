//aprovado ou reprovado

#include <stdio.h>

int main ()
{

float N1, N2, N3, N4, media;

//entrada das notas

	printf("digite as quatro notas:\n");
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

//cálculo

	media = (N1+N2+N3+N4)/4;

//resultado

if (N1 > 10 || N1 < 0 || N2 > 10 || N2 < 0 || N3 < 0 || N3 > 10 || N4 < 0 || N4 > 10)
{
	printf("notas inseridas são inválidas!\n");
}
else
{
	if (media < 5)
	{
		printf("\naluno reprovado!\n");
	}
	if (media >= 5 && media < 7)
	{
		printf("\naluno está de recuperação!\n");
	}
	if (media >= 7)
	{
		printf("\naluno aprovado!\n");
	}

}

return 0;

}
