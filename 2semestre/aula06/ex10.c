#include <stdio.h>

void copiar (char *origem, char *destino) {

    while (*origem != '\0') {

        *destino = *origem;

        destino++;
        origem++;
    }

}

int main () {

char string[20] = "Hello World"; 
char destino[20];

    copiar(string, destino);

printf("\nFrase de origem: %s", string);
printf("\nFrase de destino: %s\n", destino);

return 0;

}