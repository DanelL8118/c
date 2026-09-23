#include <stdio.h>


    int vetor (int x[], int y) {


        if ( y == 1) { return x[0]; }


        else { return x[y - 1] + vetor(x, y-1); }
    }




int main () {


    int tam, resultado;


    printf("\ndigite o tamanho do vetor: \n");
    scanf("%d", &tam);


if (tam == 0) { resultado = 0;}


else {
    int vet[tam];


        for(int i = 0; i<tam; i++) {


            printf("digite o número (%d): ", i+1);
            scanf("%d", &vet[i]);


        }


resultado = vetor(vet, tam);
}


printf("\nresultado da soma: %d\n", resultado);




return 0;


}
