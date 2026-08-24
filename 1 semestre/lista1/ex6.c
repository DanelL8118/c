//exercicio 6: custo por giga


#include <stdio.h>

int main ()

{
float preco, gb, custoGB;

//entrada do preço
	printf("qual o preço do SSD em reais?\n");
	scanf("%f", &preco);
//entrada da capacidade
	printf("qual a capacidade do SSD em GB?\n");
	scanf("%f", &gb);

//calculo do custo por giga
	custoGB = preco/gb;
if (gb < 0)
{
	printf("valor menor que 0 inválido!\n");
}
else
{
	printf("--- RESULTADO ---\n");
	printf("valor do SSD: %.2f\n", preco);
	printf("capacidade do SSD: %.2f\n", gb);
	printf("o custo por GB é: R$ %.2f\n", custoGB);
}

return 0;
}
