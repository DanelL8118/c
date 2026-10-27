#include <stdio.h>

int dobrar ( int *a ) {

    *a = *a * 2;

}

int main () {

    int x=21;

        printf("\nValor de X anteriormente: %d", x);

        dobrar(&x);

        printf("\nValor de X após: %d\n", x);


return 0;

}