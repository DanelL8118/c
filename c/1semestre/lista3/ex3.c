//ex3: debito ou credito

#include <stdio.h>
#include <string.h>

int main ()
{

char nome[40], t;
float x, y, p;

//entrada de dados

	printf("\ndigite o nome da pessoa:\n");
	fgets(nome, 40, stdin);
	nome[strcspn(nome, "\n")] = 0;

	printf("digite o valor da compra:\n");
	scanf("%f", &x);

if (x <= 0)
{
	printf("\no valor da compra inserido é inválido!\n");
}

else
{

	printf("digite a opção de compra:\na Vista(V):\nPagamento parcelado(P):\n");
	scanf(" %c", &t);

	switch(t)
	{

	case'V':
	case'v':

	y = x * 0.95;
		printf("\n---RESULTADO---\no valor da compra de %s é de: %.2f\n", nome, y);
	break;

	case'P':
	case'p':

	y = x * 1.08;
	p = y / 3;
		printf("\n---RESULTADO---\n%s deverá pagar %.2f, com parcelas de %.2f\n", nome, y, p);
	break;
	}
}

return 0;

}









