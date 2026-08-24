//exercicio 5

#include <stdio.h>

int main () {

int id1, id2;

	printf("\ndigite o ID inicial:\n");
	scanf("%d", &id1);
	printf("\ndigite o ID final:\n");
	scanf("%d", &id2);

for (int i=id1; i<=id2; i++) {

	printf("\nID:%.0d", i);
}

	printf("\n");

return 0;

}
