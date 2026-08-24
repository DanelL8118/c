//media de pares

#include <stdio.h>

int main ()

{

int N1, N2, N3, N4;
float media;
int soma = 0;
int contador = 0;

//entrada dos números
	printf("digite os 4 números inteiros:\n");
	scanf("%d %d %d %d", &N1, &N2, &N3, &N4);

//processamento

if (N1%2 == 0)
{
	soma = soma + N1;
	contador ++;
}

if (N2%2 == 0)
{
	soma = soma + N2;
	contador ++;
}

if (N3%2 == 0)
{
	soma = soma + N3;
	contador ++;
}

if (N4%2 == 0)
{
	soma = soma + N4;
	contador ++;
}

//resultado

if (contador > 0)
{
	media = soma / contador;

	printf("\n---Resultado---\n");
	printf("Soma dos pares: %.0d\n", soma);
	printf("quantidade de pares: %.0d\n", contador);
	printf("média aritmética: %.2f\n", media);
}

else
{
	printf("não foram digitados números pares\n");
}

return 0;

}






































