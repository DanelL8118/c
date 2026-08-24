//exercicio 8

#include <stdio.h>

int main () {

int acesso, maior=0, soma=0;
double menor=100000000000000000;

do {

	printf("\ndigite o número de acessos diários:(-1 para sair)\n");
	scanf("%d", &acesso);

if (acesso == -1) {

	break;
}

if (acesso > maior) {

	maior = acesso;
}

if (acesso < menor) {

	menor = acesso;
}

	soma+=acesso;
}
while (acesso != -1);

	printf("\n---RESULTADO---\nsoma de acessos diários: %.0d\n Maior valor registrado: %.0d\n Menor valor registrado: %.0f\n", soma, maior, menor);

return 0;

}

