//exercicio 6

#include <stdio.h>

int main () {

int cod, par=0, impar=0;

for (int i=0; i < 10; i++) {

	printf("\ndigite o código de requisição:\n");
	scanf("%d", &cod);

	if (cod%2 == 0)
	{
		par++;
	}
	else
	{
		impar++;
	}
}

	printf("\ncódigos de requisições impares: %d\ncódigos de requisições pares: %d\n", impar, par);

return 0;

}




