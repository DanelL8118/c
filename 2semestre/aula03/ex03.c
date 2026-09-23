#include <stdio.h>
#include <string.h>

void espaco (char a[], int b) {

    for (int i = b; i >= 0; i--) {

        if (a[i] == ' ') { a[i]--; }
    }

    printf("\n======\nfrase sem espaços:\n%s\n======\n", a);

}

int main () {

    char string[50];
    int i=0;

        printf("\ndigite sua frase: ");
        fgets(string, 50, stdin);
        string[strcspn(string, "\n")]=0;

        i = strlen(string) - 1;

        espaco(string, i);

    return 0;
}