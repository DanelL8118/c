#include <stdio.h>

int main () {

int x, vetor[20], igualx=0, cont=0;

	printf("\ndigite o valor do número:\n");
	scanf("%d", &x);

for (int i=1; i<=5; i++) {

	printf("\ndigite o número do vetor:(%d)\n", i);
	scanf("%d", &vetor[i]);

if (x == vetor[i]) {

igualx = x;
cont = i;
}

}

if (x != igualx) { printf("\nNenhum valor encontrado!\n"); }

else { printf("\nnúmero %d, na posição %d\n", igualx, cont); }

return 0;

}
