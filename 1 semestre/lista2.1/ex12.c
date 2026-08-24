//calculadora simples

#include <stdio.h>

int main ()
{

float N1, N2, resultado;
char opc;

//entrada da operação

	printf("\nescolha uma operação:\nadição(+)\nsubtração(-)\nmultiplicação(x)\ndivisão(/)\n\n");
	scanf(" %c", &opc);

//operações

switch(opc)
{

	case '+':
		printf("\ndigite os números que deseja somar:\n\n");
		scanf("%f %f", &N1, &N2);
			resultado = N1+N2;
		printf("%.0f + %.0f = %.2f\n\n", N1, N2, resultado);
	break;

	case '-':
		printf("\ndigite os números que deseja subtrair:\n\n");
		scanf("%f %f", &N1, &N2);
			resultado = N1-N2;
		printf("%.0f + %.0f = %.2f\n\n", N1, N2, resultado);
	break;

	case 'x':
		printf("\ndigite os números que deseja multiplicar:\n\n");
		scanf("%f %f", &N1, &N2);
			resultado = N1*N2;
		printf("%.0f x %.0f = %.2f\n\n", N1, N2, resultado);
	break;

	case '/':
		printf("\ndigite os números que deseja dividir:\n\n");
		scanf("%f %f", &N1, &N2);
			resultado = N1/N2;
		printf("%.0f / %.0f = %.2f\n\n", N1, N2, resultado);
	break;

	default:
		printf("\nopção inserida inválida!\n\n");
	break;
}

return 0;

}





















