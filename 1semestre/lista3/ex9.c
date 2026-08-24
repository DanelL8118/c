//ex9: preço de um carro

#include <stdio.h>

int main ()
{

char a;
int contador;
float preco;
preco = 0;
contador = 0;

//entrada de dados

	printf("\ndigite o valor do carro:\n");
	scanf("%f", &preco);

//condicionais

if (preco <= 0)
{
	printf("\nvalor inserido é inválido!\n");
}
else
{
	printf("\n(R$2.200,00)deseja cor metálica? (S/N)\n");
	scanf(" %c", &a);
		if (a == 'S' || a == 's')
		{
		preco = preco + 2200;
		contador ++;
		}
	printf("(R$890,00)deseja carregamento por indução? (S/N)\n");
	scanf(" %c", &a);
		if (a == 'S' || a == 's')
		{
		preco = preco + 890;
		contador ++;
		}
	printf("(R$2.516,32)deseja estribo lateral? (S/N)\n");
	scanf(" %c", &a);
		if (a == 'S' || a == 's')
		{
		preco = preco + 2516.32;
		contador ++;
		}
	printf("(R$3.159,90)deseja suporte para bicicleta? (S/N)\n");
	scanf(" %c", &a);
		if (a == 'S' || a == 's')
		{
		preco = preco + 3159.90;
		contador ++;
		}

//resultado

	printf("\n---RESULTADO---\nquantidade de opções escolhidas: %d\n valor total a pagar: R$ %.2f\n", contador, preco);
}

return 0;

}
















