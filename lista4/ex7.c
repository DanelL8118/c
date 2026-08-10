//exercicio 7

#include <stdio.h>

int main () {

int fat, cont=1;

	printf("\ndigite o fatorial que deseja:\n");
	scanf("%d", &fat);

while (fat < 0) {

	printf("\nnúmero digitado inválido!\ndigite novamente:\n");
	scanf("%d", &fat);
}


for (int i = 1; i < fat; i++) {

cont += cont*i;

}

	printf("\nfatorial: %d\n", cont);

return 0;

}
