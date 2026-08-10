//pessoas mais velhas

#include <stdio.h>

int main ()
{

int I1, I2, I3;
char n1[15], n2[15], n3[15];
char *maisNovo, *maisVelho;

//primeira pessoa
	printf("digite o nome da pessoa 1\n");
	scanf("%s", n1);
	printf("digite a idade da pessoa 1\n");
	scanf("%d", &I1);
//segunda pessoa
	printf("digite o nome da pessoa 2\n");
	scanf("%s", n2);
	printf("digite a idade da pessoa 2\n");
	scanf("%d", &I2);
//terceira pessoa
	printf("digite o nome da pessoa 3\n");
	scanf("%s", n3);
	printf("digite o nome da pessoa 3\n");
	scanf("%d", &I3);

//resultado

if (I1 == I2 || I1 == I3 || I2 == I3)
{
	printf("por favor, digite idades diferentes\n");
}

else
{
//mais velho

	if (I1 > I2 && I1 > I3)
	{
		maisVelho = n1;
	}
	else if (I2 > I1 && I2 > I3)
	{
		maisVelho = n2;
	}
	else if (I3 > I1 && I3 > I2)
	{
		maisVelho = n3;
	}

//mais novo

	if (I1 < I2 && I1 < I3)
	{
		maisNovo = n1;
	}
	else if (I2 < I1 && I2 < I3)
	{
		maisNovo = n2;
	}
	else if (I3 < I1 && I3 < I2)
	{
		maisNovo = n3;
	}
}

	printf("\na pessoa mais velha é: %s\n", maisVelho);
	printf("a pessoa mais nova é: %s\n", maisNovo);

return 0;

}










