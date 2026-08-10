//ex5: equação de segundo grau

#include <stdio.h>
#include <math.h>

int main ()
{

float a, b, c, delta, x1, x2;

	printf("\ndigite os valores de A, B e C:\n");
	scanf("%f %f %f", &a, &b, &c);
//delta

delta = pow(b, 2) - (4*a*c);

//condicionais

if (delta < 0)
{
	printf("\n---RESULTADO---\nvalores desejados são inválidos!\n");
}
else
{
	if (delta == 0)
	{
	x2 = -b / (2*a);
	x1 = x2;
		printf("\n---RESULTADO---\nraízes desejadas:\nX1: %.2f\nX2: %.2f\n", x1, x2);
	}
	else if (delta > 0)
	{
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
		printf("\n---RESULTADO---\nraízes desejadas:\nX1: %.2f\nX2: %.2f\n", x1, x2);
	}
}

return 0;

}









