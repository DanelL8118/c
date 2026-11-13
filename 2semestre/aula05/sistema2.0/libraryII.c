#include "libraryII.h"

int mostrarMenu () {

float opcao=0;

printf("\n======\nSISTEMA ACADÊMICO\n======\n[ 1 ] - CADASTRAR ALUNO    [ 2 ] - LISTAR ALUNO\n[ 3 ] - PESQUISAR ALUNO    [ 4 ] - ALTERAR DADOS DO ALUNO\n[ 5 ] - EXCLUIR ALUNO      [ 6 ] - ESTATISTÍCAS DA TURMA\n[ 0 ] - SAIR\n\nDigite a opção que deseja: ");
scanf("%f", &opcao);
    while (opcao < 0 || opcao > 6 || isnan(opcao) ) {
        printf("\ndigite uma opção válida: ");
        scanf("%f", &opcao);
    }

return opcao;
}

void cadastrarAluno (aluno *docente, int tamanho) {

printf("\n===\nCADASTRAR ALUNO\n===\n");

printf("\ndigite o nome do aluno: ");
scanf(" %[^\n]", docente->nome);

printf("\ndigite o curso do aluno: ");
scanf(" %[^\n]", docente->curso);

printf("\ndigite a matricula do aluno: ");
scanf("%d", &docente->matricula);

printf("\ndigite a nota n1 do aluno: ");
scanf("%f", &docente->n1);
    while ( docente->n1 < 0 || docente->n1 > 10) {        
        printf("\ndigite uma nota n1 válida: ");
        scanf("%f", &docente->n1);
        }

printf("\ndigite a nota n2 do aluno: ");
scanf("%f", &docente->n2);
    while ( docente->n2 < 0 || docente->n1 > 10) {        
        printf("\ndigite uma nota n2 válida: ");
        scanf("%f", &docente->n2);
        }

printf("\n\nAluno Cadastrado com Sucesso!\n");    

docente->media = (docente->n1 + docente->n2) / 2;
    if (docente->media >= 6.0) { strcpy(docente->situacao, "APROVADO");}
    else { strcpy(docente->situacao, "REPROVADO"); }
    
docente->cadastro = 1;
docente->codigo = tamanho+1;

}

void listarAlunos (aluno *docente, int tamanho) {

aluno *contador=NULL;

printf("\n======\nLISTAR ALUNOS\n======\n");
printf("\nCódigo     Média       Situação      Nome                                  Curso\n---------------------------------------------------------------------------------\n");

    for (contador=docente; contador< docente + tamanho; contador++) {

        if ( contador->cadastro == 1 ) { 
            printf("\n%-8d    %-8.2f    %-12s  %-35s  %-20s\n", contador->codigo, contador->media, contador->situacao, contador->nome, contador->curso);
        }
    }

}

void pesquisarAluno (aluno *docente, int tamanho) {

aluno *atual=NULL, *posicao=NULL;
int opcao=0, matricula=0;
char nome[50], cadastro[15] = "ATIVO";

    do {
        posicao=NULL;

        printf("\n======\nPESQUISAR ALUNO\n======\n\n[ 1 ] - NOME\n[ 2 ] - MATRICULA\n[ 0 ] - SAIR\n\ndigite a opção que deseja para pesquisar: ");
        scanf("%d", &opcao);
            while (opcao < 0 || opcao > 2) {
                printf("\ndigite uma opção válida!: ");
                scanf("%d", &opcao);
            }

            if (opcao == 0) { break; }

            if (opcao == 1) {

                printf("\ndigite o nome de quem deseja pesquisar: ");
                scanf(" %[^\n]", nome);

                    for (atual = docente; atual < docente + tamanho; atual++) {

                        if ( strcmp(nome, atual->nome) == 0 ) { posicao = atual; break; }
                    }
            }

            if (opcao == 2) {

                printf("\ndigite a matricula de quem deseja pesquisar: ");
                scanf("%d", &matricula);
                    while (matricula < 0 ) {                
                        printf("\ndigite uma matricula válida: ");
                        scanf("%d", &matricula);
                    }

                    for (atual = docente; atual < docente + tamanho; atual++) {

                        if ( matricula == atual->matricula ) { posicao = atual; break; }
                    }
            }

            if (posicao != NULL) { 
                
                strcpy(cadastro, "ATIVO");

                    if ( posicao->cadastro == -1 ) { strcpy(cadastro, "EXCLUIDO"); }

                printf("\n===\nALUNO ENCONTRADO!\n===\n\ncadastro: %s\ncódigo: %d\nnome: %s\nmatrícula: %d\nmédia: %.2f\n", cadastro, posicao->codigo, posicao->nome, posicao->matricula, posicao->media); 
            }

            else { printf("\nALUNO NÃO ENCONTRADO!, tente novamente\n"); }

    } while (opcao !=0);

printf("\nSAINDO...");

}

void alterarAluno (aluno *docente, int tamanho) {

int codigo=0;

printf("\n===\nALTERAR ALUNO\n===\ndigite o código do aluno que deseja alterar: ");
scanf("%d", &codigo);
    while (codigo < 0 || codigo > tamanho) {
        printf("\ndigite um código válido: ");
        scanf("%d", &codigo);
    }

docente = &docente[codigo-1];

    if ( docente->cadastro == 1) {

        cadastrarAluno(docente, tamanho);
        docente->codigo = codigo;

    }

    else { printf("\nAluno excluído ou não encontrado!, tente novamente\n"); }

}

void excluirAluno (aluno *docente, int tamanho) {

int codigo=0;

printf("\n===\nEXCLUIR ALUNO\n===\ndigite o código do aluno que deseja excluir: ");
scanf("%d", &codigo);
    while (codigo < 0 || codigo > tamanho) {
        printf("\ndigite um código válido: ");
        scanf("%d", &codigo);
    }

docente = &docente[codigo-1];

printf("\n===\nAluno %s excluido com sucesso!\n===\n", docente->nome);

docente->cadastro = -1;

}

void estatisticasTurma (aluno *turma, int tamanho) {

    aluno *contador=NULL, *maiorposicao=NULL, *menorposicao=NULL;
    int tam=0, maiornota=0, menornota=11, aprovado=0, reprovado=0;
    float soma=0, mediaTurma=0;

    for (contador = turma; contador < turma + tamanho; contador++) {

        if (contador->cadastro == 1) {
            
            tam++;
            soma += contador->media;
            mediaTurma = soma / tam;

            if (strcmp(contador->situacao, "APROVADO") == 0) { aprovado ++; }
            if (strcmp(contador->situacao, "REPROVADO") == 0) { reprovado ++; }

            if (contador->media > maiornota) { maiorposicao = contador; maiornota = contador->media; }
            if (contador->media < menornota) { menorposicao = contador; menornota = contador->media; }
        }
    } 

    printf("\n======\nESTATISTÍCAS DA TURMA\n======\n\nTamanho da turma: %d\nQuantidade de aprovados: %d\nQuantidade de reprovados: %d\nMédia geral da turma: %.2f\nAluno com maior média: %s\nAluno com menor média: %s\n", tam, aprovado, reprovado, mediaTurma, maiorposicao->nome, menorposicao->nome);
}
