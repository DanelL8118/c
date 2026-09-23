#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    int conta;
    float saldo;

} banco;

int depositar (float a, float b) {

    return a + b;

}

int sacar (float c, float d) {

    return c - d; 

}

int main () {

banco main;
int opc;
float deposito, saque;

    printf("\ndigite o número da conta: ");
    scanf("%d", &main.conta);
        while (main.conta < 0) { 
            printf("\ndigite um número válido!: ");
            scanf("%d", &main.conta);
        }

    printf("\ndigite o saldo da conta: R$ ");
    scanf("%f", &main.saldo);

do {

    printf("\n===MENU===\n[1] depositar\n[2] sacar\n[3] extrato\n[0] sair\n==========\n\ndigite a opção que deseja: ");
    scanf("%d", &opc);

switch (opc) {

    case 1 :

        printf("\n=== CONTA ATUAL: %d ===\n=== SALDO ATUAL: R$ %.2f ===\ndigite o valor que deseja depositar: ", main.conta, main.saldo);
        scanf("%f", &deposito);
            while (deposito < 0) {
                printf("\n=== CONTA ATUAL: %d ===\n=== SALDO ATUAL: R$ %.2f ===\ndigite um valor de deposito válido!: R$ ", main.conta, main.saldo);
                scanf("%f", &deposito);
                }

        main.saldo = depositar(main.saldo, deposito);

        printf("\n=====\nNovo saldo da conta %d: R$ %.2f\n=====\n", main.conta, main.saldo);
    break;

    case 2 :

        printf("\n=== CONTA ATUAL: %d ===\n=== SALDO ATUAL: R$ %.2f ===\ndigite o valor que deseja sacar: ", main.conta, main.saldo);
        scanf("%f", &saque);
            while (saque < 0 || saque > main.saldo) {
                printf("\n=== CONTA ATUAL: %d ===\n=== SALDO ATUAL: R$ %.2f ===\ndigite um valor válido para o saque!: R$ ", main.conta, main.saldo);
                scanf("%f", &saque);
                }
    
        main.saldo = sacar(main.saldo, saque);

        printf("\n=====\nNovo saldo da conta %d: R$ %.2f\n=====\n", main.conta, main.saldo);
    break;

    case 3 :

        printf("\n=====\nSaldo da conta %d: R$ %.2f\n=====\n", main.conta, main.saldo);

    break;
}

} while (opc != 0);

    printf("\nsaindo...\n");

return 0;
}
