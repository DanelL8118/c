//EXERCICIO 3 - FUNÇÃO FATORIAL

#include <stdio.h>

float fatorial (float x) {

    if (x == 1) { return x;}

    else { return x*fatorial(x-1); }

}

int main () {
    
    float fatorado, resultado;

    printf("\ndigite o núemro que deseja fatorar: \n");
    scanf("%f", &fatorado);

    resultado = fatorial(fatorado);

    printf("\nResultado da fatoração: %.2f\n", resultado);

return 0;
}