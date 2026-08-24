//exercicio 11: payback de investimento

#include <stdio.h>

int main ()
{
float inv, ret, payb;

//entrada do investimento
	printf("digite o valor do investimento inicial(R$):\n");
	scanf("%f", &inv);
//entrada do retorno mensal
	printf("digite o retorno monetário mensal(R$):\n");
	scanf("%f", &ret);
//cálculo do payback
	payb = inv/ret;
//Resposta
	if (inv < 0)
{
	printf("valor do investimento incorreto!\n");
}
	else
{
	printf("---RESULTADO---\n");
	printf("Valor do investimento inicial: R$ %.2f\n", inv);
	printf("Valor do retorno mensal: R$ %.2f\n", ret);
	printf("Meses para o payback: %.0f\n", payb);
}

return 0;

}
