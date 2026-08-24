//área de circulo

#include <stdio.h>
#include <math.h>

int main ()
{

float raio, area;

//entrada do raio

	printf("digite o raio do circulo:\n");
	scanf("%f", &raio);

//cálculo

area = M_PI * pow(raio, 2);

//resultado

if (raio < 0)
{
	printf("o valor inserido é inválido!\n");
}
else
{
	printf("---RESULTADO---\n");
	printf("a área do circulo é: %.2f\n", area);
}

return 0;

}
