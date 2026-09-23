#include <stdio.h>
#include <string.h>

void copiar (char a[], int b) {

    char copia[b];

        strcpy(copia, a);

    printf("\n======\nCriando cópia...\ncópia criada: %s\n======\n", copia);

}

int main () {

    char string[50];
    int i=0;

        printf("\ndigite a frase que deseja copiar: \n");
        fgets(string, 50, stdin);
        string[strcspn(string, "\n")]=0;

        i = strlen(string) - 1;

        copiar(string, i);

    return 0;
}