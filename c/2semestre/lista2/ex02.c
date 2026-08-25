#include <stdio.h>


int n (int x) {


    if ( x == 1 ) { return x; }


    else { return x + n( x - 1 ); }


}


int main () {


    int a;


    printf("\ndigite o número que deseja as somas: ");
    scanf("%d", &a);


        while ( a <= 0) {


            printf("\ndigite o número novamente: ");
            scanf("%d", &a);


        }


        printf("\nresultado da soma: %d\n", n(a));


}
