#include <stdio.h>
#include <stdlib.h>

/*

int *criar_contador(void) {

    int contador = 0;

return &contador;

}

int main(void) {

    int *c = criar_contador();

    *c = *c + 1;

    printf("contador = %d\n", *c);

return 0;

} */

/* O erro acontece devido ao escopo da váriavel estar dentro de uma função, função essa que desocupa a memória assim que deixa de ser usado gerando o erro "core dumped" devido a memória não estar mais reservada ao programa */

int *criar_contador(void) {

int *contador;

contador = (int*) malloc(sizeof(int));

    if (contador == NULL) { printf("\nErro na alocação de memória!"); return 1; }

    else {

        *contador = 0;
        return contador;
    }
}

int main(void) {

int *c = criar_contador();

*c = *c + 1;

printf("\ncontador = %d\n", *c);

free(c);

return 0;

} 