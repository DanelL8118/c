#include "library.h"

int main () {
    
int opc=0, tamanho=0;
aluno vetor[TAM];

do {

    opc = mostrarMenu();

    if (opc == 1) { cadastrarAluno(vetor, tamanho); tamanho++; }

    if (tamanho == 0 && opc != 0) { printf("\nNenhum aluno cadastrado ainda! tente novamente\n"); }

    else {

        if (opc == 2) { listarAlunos(vetor, tamanho); }

        if (opc == 3) { pesquisarAluno(vetor, tamanho); }

        if (opc == 4) { alterarAluno(vetor, tamanho); }

        if (opc == 5) { excluirAluno(vetor, tamanho); }

        if (opc == 6) { estatisticasTurma(vetor, tamanho); }

    }

} while (opc != 0);

    printf("\nSaindo...\n");

return 0;

}