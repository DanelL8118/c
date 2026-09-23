#include <stdio.h>
#include <string.h>

void left (char a[], int b, int c) {

    char frase [50];
    int j=0;

        for (int i = 0; i <= c; i++) {

            frase[j] = a[i];
            j++;
        }
    frase[j] = '\0';

    printf("\n======\nfrase:\n%s, %d\n======\n", frase, j);

}

void right (char a[], int b, int c) {

    char frase [50];
    int j=0;

        for (int i = b-c; i <= b; i++) {

            frase[j] = a[i];
            j++;
        }
    frase[j] = '\0';

    printf("\n======\nfrase:\n%s, %d\n======\n", frase, j);

}

int main () {

    char string[50];
    int i=0, opc=0, quant=0;

        printf("\ndigite a frase que deseja: ");
        fgets(string, 50, stdin);
        string[strcspn(string, "\n")]=0;

        i = strlen(string) - 1;

        printf("\n======funções======\n(1) LEFT\n(2) RIGHT\n================\nDigite a opção que deseja: ");
        scanf("%d", &opc);

            while (opc != 1 && opc != 2) { 

                printf("\n======funções======\n(1) LEFT\n(2) RIGHT\n===================\nDigite uma opção válida!: ");
                scanf("%d", &opc);
            }

        printf("\ndigite quantos caracteres deseja ver: ");
        scanf("%d", &quant);

            while (quant <= 0 || quant > i) {

                printf("\ndigite quantos caracteres deseja ver novamente!: ");
                scanf("%d", &quant);
            }
            
        if (opc == 1) { left(string, i, quant-1); }

        if (opc == 2) { right(string, i, quant-1); }

    return 0;
}