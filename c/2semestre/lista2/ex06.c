#include <stdio.h>

int mdc (int x, int y) {

        if ( x == y ) { return x; }

        if (x > y) { return mdc(x - y , y); }

    return mdc(x, y-x);

}

int main () {

    int a, b;

    printf("\ndigite os valores de a e b, respectivamente: ");
    scanf("%d %d", &a, &b);

    printf("\nO MDC de %d e %d é igual a: %d\n", a, b, mdc(a, b));

}