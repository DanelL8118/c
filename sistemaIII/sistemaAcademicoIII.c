#include "libraryIII.h"

int main () {

int opc=0, tamanho=0, tamanhoB=0;
aluno *vetor;
FILE *cadastro = fopen("cadastros.bin", "rb+");

if (cadastro == NULL) {

        cadastro = fopen("cadastros.bin", "wb+");
            if (cadastro == NULL) {

                printf("\nErro na abertura do arquivo!\n");
            }
    }

fseek(cadastro, 0, SEEK_END);
tamanhoB = ftell(cadastro);
tamanho = tamanhoB / sizeof(aluno);
rewind(cadastro);

vetor = (aluno *) malloc(TAM * sizeof(aluno));

    if ( vetor == NULL ) { 
    
        printf("\nErro na alocação de memória\n");
        fclose(cadastro);
        return 1;
    }

    if ( tamanho > 0 ) { fread(vetor, sizeof(aluno), tamanho, cadastro); }

do {

printf("\n===\nQuantidade de alunos cadastrados: %d\n===\n", tamanho);

    opc = mostrarMenu();

    if (opc == 0) { break; }

    if (opc == 1) { 
        
        if ( tamanho < TAM) { fseek(cadastro, 0, SEEK_END); cadastrarAluno(&vetor[tamanho], tamanho, cadastro); tamanho++; }

        else { printf("\nQuantidade máxima da turma atingida!\n"); }
    }

    if (tamanho == 0 && opc != 0) { printf("\nNenhum aluno cadastrado ainda! tente novamente\n"); }

    else {

        if (opc == 2) { listarAlunos(vetor, tamanho); }

        if (opc == 3) { pesquisarAluno(vetor, tamanho); }

        if (opc == 4) { alterarAluno(vetor, tamanho, cadastro); }

        if (opc == 5) { excluirAluno(vetor, tamanho); }

        if (opc == 6) { estatisticasTurma(vetor, tamanho); }

    }

} while (opc != 0);

    printf("\nSAINDO...\n");

fclose(cadastro);
free(vetor);

return 0;

}