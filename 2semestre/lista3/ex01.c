#include <stdio.h>
#include <string.h>

void inverter (char a[], int b) {

char invertido[b+2], j=0;

    for (int i=b; i >= 0 ; i--) {

        invertido[j] = a[i];
        j++;

    }

    printf("\n======\nfrase invertida:\n%s\n======\n", invertido);

}

int main () {

    char string[50];
    int i=0;

        printf("\ndigite a frase que deseja inverter: \n");
        fgets(string, 50, stdin);
        string[strcspn(string, "\n")]=0;

        i = strlen(string) - 1;

        inverter(string, i);

    return 0;
}