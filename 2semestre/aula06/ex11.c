#include <stdio.h>
#include <stdlib.h>

/*

int main(void) {

int n = 5;
int *v = malloc(n * sizeof(int));

    for (int i = 0; i <= n; i++)
        v[i] = i * 10;

printf("último = %d\n", v[n - 1]);

return 0;
}
*/



int main(void) {

int n = 5;
int *v = malloc(n * sizeof(int));

    if (v == NULL) { printf("\nErro na alocação de memória!"); return 1; }

    for (int i = 0; i < n; i++) { v[i] = i * 10; }

printf("\núltimo = %d\n", v[n-1]);

free(v);

return 0;

}