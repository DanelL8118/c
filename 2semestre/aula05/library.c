#include "library.h"

int mostrarMenu () {

float opcao=0;

printf("\n======\nSISTEMA ACADÊMICO\n======\n[ 1 ] - CADASTRAR ALUNO    [ 2 ] - LISTAR ALUNOS\n[ 3 ] - PESQUISAR ALUNOS   [ 4 ] - ALTERAR DADOS DO ALUNO\n[ 5 ] - EXCLUIR ALUNO      [ 6 ] - ESTATISTÍCAS DA TURMA\n[ 0 ] - SAIR\n\nDigite a opção que deseja: ");
scanf("%f", &opcao);
    while (opcao < 0 || opcao > 6 || isnan(opcao) ) {
        printf("\ndigite uma opção válida: ");
        scanf("%f", &opcao);
    }

return opcao;
}

void cadastrarAluno ( aluno docente[], int codigo ) {

int cod=1;

printf("\n======\nCADASTRAR ALUNO\n======\n");

printf("\ndigite o nome do aluno: ");
scanf(" %[^\n]", docente[codigo].nome);

printf("\ndigite o curso do aluno: ");
scanf(" %[^\n]", docente[codigo].curso);

printf("\ndigite a matricula do aluno: ");
scanf("%d", &docente[codigo].matricula);

printf("\ndigite a nota n1 do aluno: ");
scanf("%f", &docente[codigo].n1);
    while (docente[codigo].n1 < 0 || docente[codigo].n1 > 10) {        
        printf("\ndigite uma nota n1 válida: ");
        scanf("%f", &docente[codigo].n1);
        }

printf("\ndigite a nota n2 do aluno: ");
scanf("%f", &docente[codigo].n2);
    while (docente[codigo].n2 < 0 || docente[codigo].n1 > 10) {        
        printf("\ndigite uma nota n2 válida: ");
        scanf("%f", &docente[codigo].n2);
        }

printf("\n\nAluno Cadastrado com Sucesso!\n");    

docente[codigo].media = (docente[codigo].n1 + docente[codigo].n2) / 2;
    if (docente[codigo].media >= 6.0) { strcpy(docente[codigo].situacao, "APROVADO");}
    else { strcpy(docente[codigo].situacao, "REPROVADO"); }
    
docente[codigo].cadastro = 1;
docente[codigo].codigo = codigo;
codigo++;
}

void listarAlunos ( aluno docente[], int tamanho) {

int contador=0;

printf("\n======\nLISTAR ALUNOS\n======\n");
printf("\nCódigo     Média       Situação      Nome                                  Curso\n---------------------------------------------------------------------------------\n");

    for (contador=0; contador<tamanho; contador++) {

        if ( docente[contador].cadastro == 1 ) { 
            printf("\n%-8d    %-8.2f    %-12s  %-35s  %-20s\n", contador+1, docente[contador].media, docente[contador].situacao, docente[contador].nome, docente[contador].curso);
        }
    }

}

void pesquisarAluno (aluno docente[], int tamanho) {

int opcao=0, contador=0, posicao=-1, matricula=0;
char nome[50], cadastro[15] = "ATIVO";

    do {

        printf("\n======\nPESQUISAR ALUNO\n======\n\n[ 1 ] - NOME\n[ 2 ] - MATRICULA\n[ 0 ] - SAIR\n\ndigite a opção que deseja para pesquisar: ");
        scanf("%d", &opcao);
            while (opcao < 0 || opcao > 2) {
                printf("\ndigite uma opção válida!: ");
                scanf("%d", &opcao);
            }

            if (opcao == 1) {

                printf("\ndigite o nome de quem deseja pesquisar: ");
                scanf(" %[^\n]", nome);

                    for (contador = 0; contador < tamanho; contador++) {

                        if ( strcmp(nome, docente[contador].nome) == 0 ) { posicao = contador; }
                    }
            }

            if (opcao == 2) {

                printf("\ndigite a matricula de quem deseja pesquisar: ");
                scanf("%d", &matricula);
                    while (matricula < 0 ) {                
                        printf("\ndigite uma matricula válida: ");
                        scanf("%d", &matricula);
                    }

                    for (contador = 0; contador < tamanho; contador++) {

                        if (matricula == docente[contador].matricula) { posicao = contador; }
                    }
            }

            if (posicao != -1) { 
            
                    if ( docente[posicao].cadastro == -1 ) { strcpy(cadastro, "EXCLUIDO"); }

                printf("\n===\nALUNO ENCONTRADO!\n===\n\ncadastro: %s\ncódigo: %d\nnome: %s\nmatrícula: %d\nmédia: %.2f\n", cadastro, docente[posicao].codigo+1, docente[posicao].nome, docente[posicao].matricula, docente[posicao].media); 
            }

            if (posicao == -1) { printf("\nALUNO NÃO ENCONTRADO!, tente novamente\n"); }

    } while (opcao !=0);

printf("\nSAINDO...");

}

void alterarAluno (aluno docente[], int tamanho) {

int codigo=0;

printf("\n===\nALTERAR ALUNO\n===\ndigite o código do aluno que deseja alterar: ");
scanf("%d", &codigo);
    while (codigo < 0 || codigo > tamanho) {
        printf("\ndigite um código válido: ");
        scanf("%d", &codigo);
    }
codigo = codigo - 1;

    if ( docente[codigo].cadastro == 1) {

        printf("\ndigite o nome do aluno: ");
        scanf(" %[^\n]", docente[codigo].nome);

        printf("\ndigite o curso do aluno: ");
        scanf(" %[^\n]", docente[codigo].curso);

       printf("\ndigite a matricula do aluno: ");
        scanf("%d", &docente[codigo].matricula);

        printf("\ndigite a nota n1 do aluno: ");
        scanf("%f", &docente[codigo].n1);
            while (docente[codigo].n1 < 0) {        
                printf("\ndigite uma nota n1 válida: ");
                scanf("%f", &docente[codigo].n1);
            }

        printf("\ndigite a nota n2 do aluno: ");
        scanf("%f", &docente[codigo].n2);
            while (docente[codigo].n2 < 0) {        
                printf("\ndigite uma nota n2 válida: ");
                scanf("%f", &docente[codigo].n2);
            }

        
        docente[codigo].media = (docente[codigo].n1 + docente[codigo].n2) / 2;
        
            if (docente[codigo].media >= 6.0) { strcpy(docente[codigo].situacao, "APROVADO"); }
        
            else { strcpy(docente[codigo].situacao, "REPROVADO"); }
    }

    else { printf("\nAluno excluído ou não encontrado!, tente novamente\n"); }

}

void excluirAluno (aluno docente[], int tamanho) {

int codigo=0;

printf("\n===\nEXCLUIR ALUNO\n===\ndigite o código do aluno que deseja excluir: ");
scanf("%d", &codigo);
    while (codigo < 0 || codigo > tamanho) {
        printf("\ndigite um código válido: ");
        scanf("%d", &codigo);
    }
codigo = codigo - 1;

printf("\n===\nAluno %s excluido com sucesso!\n===\n", docente[codigo].nome);

docente[codigo].cadastro = -1;
}

void estatisticasTurma (aluno turma[], int tamanho) {

    int tam=0, contador=0, maiornota=0, menornota=11, aprovado=0, reprovado=0, maiorposicao=0, menorposicao=0;
    float soma=0, mediaTurma=0;

    for (contador = 0; contador < tamanho; contador++) {

        if (turma[contador].cadastro == 1) {
            
            tam++;
            soma += turma[contador].media;
            mediaTurma = soma / tam;

            if (strcmp(turma[contador].situacao, "APROVADO") == 0) { aprovado ++; }
            if (strcmp(turma[contador].situacao, "REPROVADO") == 0) { reprovado ++; }

            if (turma[contador].media > maiornota) { maiorposicao = contador; maiornota = turma[contador].media; }
            if (turma[contador].media < menornota) { menorposicao = contador; menornota = turma[contador].media; }
        }
    } 

    printf("\n======\nESTATISTÍCAS DA TURMA\n======\n\nTamanho da turma: %d\nQuantidade de aprovados: %d\nQuantidade de reprovados: %d\nMédia geral da turma: %.2f\nAluno com maior média: %s\nAluno com menor média: %s\n", tam, aprovado, reprovado, mediaTurma, turma[maiorposicao].nome, turma[menorposicao].nome);
}
