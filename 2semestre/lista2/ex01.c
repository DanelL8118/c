#include <stdio.h>


float quadrado (float x, float y) {


    if (y == 1 ) { return x; }


    else { return x*quadrado(x, y-1); }


}


int main () {


    float a, b, resposta;


    printf("\ndigite a base da potência: ");
    scanf("%f", &a);


    printf("\ndigite a potência: ");
    scanf("%f", &b);


    resposta = quadrado(a, b);


    printf("\n=============================================");
    printf("\nresultado = %.2f\n", resposta);
    printf("=============================================\n");


    return 0;


}
