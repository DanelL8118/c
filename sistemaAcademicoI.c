#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 50

typedef struct {

int codigo;
int matricula;
float n1;
float n2;
float media;
char nome[50];
char curso[50];
char situacao[15];

} aluno;

int mostrarMenu () {

int opcao=0;

    printf("\n======\nSISTEMA ACADÊMICO\n======\n[ 1 ] - CADASTRAR ALUNO\n[ 2 ] - LISTAR ALUNOS\n[ 3 ] - PESQUISAR ALUNOS\n[ 4 ] - ALTERAR DADOS DO ALUNO\n[ 5 ] - EXCLUIR ALUNO\n[ 6 ] - ESTATISTÍCAS DA TURMA\n[ 0 ] - SAIR\n\nDigite a opção que deseja: ");
    scanf("%d", &opcao);
        while (opcao < 0 || opcao > 6) {
            printf("\ndigite uma opção válida: ");
            scanf("%d", &opcao);
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
        
        if (docente[codigo].media >= 6.0) { strcpy(docente[codigo].situacao, "APROVADO");}
        
        else { strcpy(docente[codigo].situacao, "REPROVADO"); }

    docente[codigo].codigo = codigo;
    codigo++;
    }

void listarAlunos ( aluno docente[], int tamanho) {

    int codigoador=0;

    printf("\n======\nLISTAR ALUNOS\n======\n");
    printf("\nPosição      Nome          Situação       Média\n-----------------------------------------------\n");

    for (codigoador=0; codigoador<tamanho; codigoador++) {

    printf("\n%d      %s            %s      %f", codigoador+1, docente[codigoador].nome, docente[codigoador].situacao, docente[codigoador].media);
    }
}

void pesquisarAluno (aluno docente[], int tamanho) {

    int opcao=0, contador=0, posicao=0, matricula=0;
    char nome[50];

    printf("\n======\nPESQUISAR ALUNO\n======\n\n[ 1 ] - NOME\n[ 2 ] - MATRICULA\n[ 0 ] - SAIR\ndigite a opção que deseja para pesquisar: ");
    scanf("%d", &opcao);
        while (opcao < 0 || opcao > 2) {
            printf("\ndigite uma opção válida!: ");
            scanf("%d", &opcao);
        }

        if (opcao == 1) {

            printf("\ndigite o nome de quem deseja pesquisar: ");
            scanf(" %[^\n]", nome);

                for (contador = 0; contador < tamanho; contador++) {

                    if (nome == docente[contador].nome) { posicao = contador; }

                }

            if (posicao != 0) { printf("\nALUNO ENCONTRADO!\ncódigo: %d\nnome: %s\nmatrícula: %d\nmédia: %f", docente[contador].codigo, docente[posicao].nome, docente[posicao].matricula, docente[posicao].media); }

            if (posicao == 0) { printf("\nALUNO NÃO ENCONTRADO!, tente novamente\n"); }
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

            if (posicao != 0) { printf("\nALUNO ENcodigoRADO!\ncódigo: %d\nnome: %s\nmatrícula: %d\nmédia: %f", docente[contador].codigo, docente[posicao].nome, docente[posicao].matricula, docente[posicao].media); }

            if (posicao == 0) { printf("\nALUNO NÃO ENcodigoRADO!, tente novamente\n"); }
        
        }

        if (opcao == 0) {
            printf("\nSAINDO...");
        }
}

void alterarAluno (aluno docente[], int tamanho) {

int codigo=0;

    printf("\ndigite o código do aluno que deseja alterar: ");
    scanf("%d", &codigo-1);
        while (codigo < 0 || codigo > tamanho) {
            printf("\ndigite um código válido: ");
            scanf("%d", &codigo-1);
        }



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

void excluirAluno (aluno docente[], int tamanho) {


    int codigo=0;

    printf("\ndigite o código do aluno que deseja excluir: ");
    scanf("%d", &codigo-1);
        while (codigo < 0 || codigo > tamanho) {
            printf("\ndigite um código válido: ");
            scanf("%d", &codigo-1);
        }

        docente[codigo].codigo = 0;
        docente[codigo].matricula = 0;
        strcpy(docente[codigo].nome, "");
        strcpy(docente[codigo].curso, "");
        strcpy(docente[codigo].situacao, "");
        docente[codigo].n1 = 0;
        docente[codigo].n2 = 0;
        docente[codigo].media = 0;
}

void estatisticasTurma (aluno turma[], int tamanho) {

    int contador=0, maiornota=0, menornota=10, aprovado=0, reprovado=0, maiorposicao=0, menorposicao=0;
    float soma=0, mediaTurma=0;

    for (contador = 0; contador < tamanho; contador++) {

        soma += turma[contador].media;
        mediaTurma = soma / tamanho;

        if (turma[contador].situacao == "APROVADO") { aprovado ++; }
        if (turma[contador].situacao == "REPROVADO") { reprovado ++; }

        if (turma[contador].media > maiornota) { maiorposicao = contador; maiornota = turma[contador].media; }
        if (turma[contador].media < menornota) { menorposicao = contador; menornota = turma[contador].media; }

    } 

    printf("\n======\nESTATISTÍCAS DA TURMA\n======\n");
    printf("Tamanho da turma: %d\nQuantidade de aprovados: %d\nQuantidade de reprovados: %d\nMédia geral da turma: %.2f\nAluno com maior média: %s\nAluno com menor média: %s\n", tamanho, aprovado, reprovado, mediaTurma, turma[maiorposicao].nome, turma[menorposicao].nome);
}

int main () {
    
int opc=0, tamanho=0;
aluno vetor[TAM];

do {

opc = mostrarMenu();

if (opc == 1) { cadastrarAluno(vetor, tamanho); tamanho++; }

if (opc == 2) { listarAlunos(vetor, tamanho); }

if (opc == 3) { pesquisarAluno(vetor, tamanho); }

if (opc == 4) { alterarAluno(vetor, tamanho); }

if (opc == 5) { excluirAluno(vetor, tamanho); }

if (opc == 6) { estatisticasTurma(vetor, tamanho); }

} while (opc != 0);

return 0;

}