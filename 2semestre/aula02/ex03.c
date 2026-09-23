#include <stdio.h>


int X(int a) {


    if ( a <= 0 ) {


        return 0;


    }
    else {


        return a + X(a-1);


    }


}


/*a função serve para fazer a soma recursiva do número dado pois sempre que a função chama ela mesma, o número vai diminundo e sua soma sendo armazenada nas funções que se abrem, retornando todas ao valor principal*/


int main () {


int x;


    printf("digite o número que deseja");
    scanf("%d", &x);


    printf("\nresultado: %d\n", X(x));


}
