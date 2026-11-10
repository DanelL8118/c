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
int cadastro;
float n1;
float n2;
float media;
char nome[50];
char curso[50];
char situacao[15];

} aluno;

int mostrarMenu ();
void cadastrarAluno (aluno *docente);
void listarAlunos (aluno *docente);
void pesquisarAluno (aluno *docente);
void alterarAluno (aluno *docente);
void excluirAluno (aluno *docente);
void estatisticasTurma (aluno *turma);

#endif