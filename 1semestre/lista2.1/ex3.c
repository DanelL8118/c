//impar ou par

#include <stdio.h>

int main ()
{

int num;

//entrada do número

	printf("digite o número que deseja verificar:\n");
	scanf("%d", &num);

//resultado

if (num > 0)
{
	if (num%2 == 0)
	{
		printf("o número %d é par\n", num);
	}

	else
	{
		printf("o número %d é impar\n", num);
	}
}
else
{
	printf("o número inserido é inválido!\n");
}

return 0;

}
