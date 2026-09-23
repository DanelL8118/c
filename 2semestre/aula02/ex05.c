#include <stdio.h>

int soma1 (int n) {

    if (n == 1) { return n; }

    else { return n + soma1(n - 1); }

}

int main () {

int num;

    printf("\ndigite o número que deseja: ");
    scanf("%d", &num);

        while (num <= 0) { 
            
            printf("\ndigite um número maior que 0: ");
            scanf("%d", &num);

        }

    printf("\nO valor da soma de 1 até %d é igual a: %d \n", num, soma1(num));

return 0;

}