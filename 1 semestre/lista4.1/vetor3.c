#include <stdio.h>

int main () {

int vetor[12], soma=0, x, y, igualx=0, igualy=0, contx=0, conty=0;

	printf("\ndigite o valor de X:\n");
	scanf("%d", &x);

	printf("\ndigite o valor de Y:\n");
	scanf("%d", &y);

for (int i=1; i<=5; i++) {

	printf("\ndigite o número do vetor:(%d)\n", i);
	scanf("%d", &vetor[i]);

if (x == vetor[i]) { igualx = x; contx = i; }

if (y == vetor[i]) { igualy = y; conty = i; }

}

if (x != igualx && y != igualy) { printf("\nNenhum valor encontrado!\n"); }

else { printf("\n\n---RESULTADO---\n número X: %d, na posição %d\nnúmero Y: %d, na posição %d\n---------------\n\n", igualx, contx, igualy, conty, soma=igua); }

return 0;

}
