#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define TAM 10

typedef struct {

int dia;
int mes;
int ano;

} data;

typedef struct {

char nome[50];
float altura;
data nascimento;

} pessoas;

data CriaData() {

    data D;

    D.mes = 1 + (rand() % 12);
    D.ano = 1950 + (rand() % 49);
    D.dia = 1 + (rand() % 30);

    return D;

}

pessoas criar () {

    pessoas cria;

    printf("\ndigite o nome da pessoa: ");
    scanf(" %[^\n]", cria.nome);

    printf("\ndigite a altura da pessoa: ");
    scanf("%f", &cria.altura);

    cria.nascimento = CriaData();

    return cria;

}

pessoas listar (int a, pessoas b[]) {

    printf("\n====PESSOAS CADASTRADAS====\n");

    for (int i = 0; i < a; i++) {

        printf("\n%s", b[i].nome);
        printf("\n%.2f m\n", b[i].altura);
        printf("\nData de nascimento: %02d/%02d/%d\n", b[i].nascimento.dia, b[i].nascimento.mes, b[i].nascimento.ano);

    }

}

pessoas datade (int a, pessoas quant[]) {

    int dia, mes, ano;

    /*printf("\ndigite o dia: ");
    scanf("%d", &dia);
        while (dia <= 0 || dia > 31) { printf("\ndigite o dia: "); scanf("%d", &dia); }

    printf("\ndigite o mês: ");
    scanf("%d", &mes);
        while (mes <= 0 || mes > 12) { printf("\ndigite o mes: "); scanf("%d", &mes); }*/

    printf("\ndigite o ano: ");
    scanf("%d", &ano);
        while (ano <= 0) { printf("\ndigite o ano: "); scanf("%d", &ano); }

    printf("\n====PESSOAS====\n");

    for (int i = 0; i < a; i++) {

        if (quant[i].nascimento.ano < ano) {

            printf("\n%s", quant[i].nome);
        }
    
    }

}

int main () {

pessoas quant[TAM];
int i = 0, opc;

    do {

    printf("\n====PESSOA %d====\n[1] - INSERIR UMA PESSOA\n[2] - LISTAR PESSOAS\n[3] - LISTAR NOME DE PESSOAS QUE NASCERAM ANTES\n[0] - SAIR\n============\n", i);
    printf("digite a opção que deseja: ");
    scanf("%d", &opc);
        while (opc < 0 || opc > 3) {
            printf("digite uma opção válida: ");
            scanf("%d", &opc);
        }
    
        switch (opc) {

            case 1 :

            if (i <= TAM) {
            quant[i] = criar();
            i++;
            }

            else {

            printf("\nquantidade máxima atingida!\n");

            }

            break;

            case 2 :

            listar(i, quant);

            break;

            case 3 :

            datade(i, quant);

            break;

        }

    } while (i < TAM || opc != 0);

}