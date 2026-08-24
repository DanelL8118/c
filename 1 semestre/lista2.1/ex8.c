//verificação de número

#include <stdio.h>

int main()
{

    int num;

    printf("Digite um número:\n");
    scanf("%d", &num);

// Verificação do primeiro número

if (num % 2 == 0)
{
	printf("O número %d é par\n", num);

	if (num > 0)
	{
		printf("o número %d é positivo\n", num);
	}
	else
	{
		printf("o número é negativo\n");
	}
}

else

{
	printf("O numero %d e impar\n", num);

	if (num > 0)
	{
		printf("o número é positivo\n");
	}
	else
	{
		printf("o número é negativo\n");
	}
}

    return 0;

}

