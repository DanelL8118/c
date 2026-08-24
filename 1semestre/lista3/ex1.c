//ex1: função de X

#include <stdio.h>
#include <math.h>

int main ()
{

float x, y;

//entrada de dados

	printf("Digite o valor de X:\n");
	scanf("%f", &x);

//condicionais

if (x < 1)
{
y = 4-pow(x, 2);
	printf("\no f de X é igual a: %.2f\n", y);
}
if (x == 1)
{
y = 2;
	printf("\no f de X é igual a: %.2f\n", y);
}
if (x > 1)
{
y = 2+pow(x, 2);
	printf("\no f de X é igual a: %.2f\n", y);
}

return 0;

}





