//EXERCICIO 1 - FUNÇÃO DE SUBTRAÇÃO

#include <stdio.h>

void subtracao (float x, float y) {

    printf("\n%.2f - %.2f = %.2f\n",x, y, x-y);

}

int main () {

    float a, b;

    printf("\ndigite a subtração que deseja: \n");
    scanf("%f", &a);

    printf("\n%.2f - ", a);
    scanf("%f", &b);

    subtracao(a, b);

return 0;

}