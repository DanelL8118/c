#include "libraryII.h"

int main () {
    
int opc=0, tamanho=0;
aluno vetor[TAM];

do {

    opc = mostrarMenu();

    if (opc == 0) { break; }

    if (opc == 1) { cadastrarAluno(&vetor[tamanho], tamanho); tamanho++; }

    if (tamanho == 0 && opc != 0) { printf("\nNenhum aluno cadastrado ainda! tente novamente\n"); }

    else {

        if (opc == 2) { listarAlunos(&vetor[0], tamanho); }

        if (opc == 3) { pesquisarAluno(&vetor[0], tamanho); }

        if (opc == 4) { alterarAluno(&vetor[0], tamanho); }

        if (opc == 5) { excluirAluno(&vetor[0], tamanho); }

        if (opc == 6) { estatisticasTurma(&vetor[0], tamanho); }

    }

} while (opc != 0);

    printf("\nSAINDO...\n");

return 0;

}