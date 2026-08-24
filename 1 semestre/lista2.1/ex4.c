//soma e divisão

#include <stdio.h>

int main ()
{

int N1, N2, div;
float soma, quo;


//entrada dos número

        printf("digite os números que deseja:\n");
        scanf("%d %d", &N1, &N2);

//soma

soma = N1+N2;

	printf("o resultado da soma é: %f\n", soma);
	printf("digite o divisor que deseja:\n");
	scanf("%d", &div);

//divisão

quo = soma/div;

//resultado

	printf("---RESULTADO---\n");
	printf("números: %.2d + %.2d = %f\n", N1, N2, soma);
	printf("divisor: %.2d\n", div);
	printf("resultado: %.2f\n", quo);

return 0;

}








