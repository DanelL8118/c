// exercício 14: retorno poupança programada
#include <math.h>
#include <stdio.h>

double main ()
{
float P, i, n, d, x, y, z, w, l, m, o;
d = 1;
m = 100;


//entrada da aplicação mensal
	printf("digite o valor da aplicação mensal(R$):\n");
	scanf("%f", &P);
//entrada da taxa mensal
	printf("digite a taxa de retorno mensal:\n");
	scanf("%f", &i);
//entrada da quantidade de meses
	printf("digite quantos meses duraram a aplicação:\n");
	scanf("%f", &n);
//cálculo

	o = i/m;
	w = d+o;
	l = pow (w, n);
	x = l-d;
	y = x/o;
	z = y*P;

//Resposta

	if (P < 0 || i < 0 || n < 0)
{
	printf("Valores inseridos inválidos!\n");
}
	else
{
	printf("---RESULTADO---\n");
	printf("aplicação mensal(R$): %.2f\n", P);
	printf("taxa mensal: %.2f\n", o);
	printf("quantida de meses: %.0f\n", n);
	printf("retorno gerado(R$): %.2f\n", z);
}

return 0;

}
