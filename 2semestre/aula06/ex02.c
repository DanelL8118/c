#include <stdio.h>
/*
int main(void) {

    int a = 10, b = 20;
    int *p = &a;

    p = 30; //deveria alterar o valor de a para 30
    p = b; //deveria fazer p apontar para b

        printf("a = %d, *p = %d\n", a, *p);

return 0;

}
*/

//Correção:

int main () {

int a = 10, b = 20;
int *p = &a;

*p = 30; //adicionado * para que seja considerado ponteiro
p = &b; //adicionado & para receber um endereço de variável

printf("a = %d, *p = %d\n", a, *p);

return 0;

}