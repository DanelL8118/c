#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
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

int mostrarMenu ();
void cadastrarAluno ( aluno docente[], int codigo);
void listarAlunos ( aluno docente[], int tamanho);
void pesquisarAluno (aluno docente[], int tamanho);
void alterarAluno (aluno docente[], int tamanho);
void excluirAluno (aluno docente[], int tamanho);
void estatisticasTurma (aluno turma[], int tamanho);

#endif