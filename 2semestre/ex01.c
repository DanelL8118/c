#include <stdio.h>

int main () {

    float temp = 36.5;
    float *p;

    p = &temp;

        printf("\nTemperatura atual em %.2f ºC", *p);

        printf("\nTemperatura atualizada para %.2f ºC\n\n", *p + 0.7);

return 0;

}