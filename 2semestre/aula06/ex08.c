#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[50];
    double nota;

} aluno;

void aplicarBonus ( aluno *a, double bonus) {

a->nota += bonus;

    if ( a->nota > 10 ) { a->nota = 10; }
}

int main () {

int bonus=2;
aluno a1 = {"Carla", 8.5};
aluno *ptr = &a1;

printf("\n===NOTA BÁSICA===\nNome da aluna: %s\nNota da aluna: %.2f\n", ptr->nome, ptr->nota);
        
    aplicarBonus(ptr, bonus);
        
printf("\n===NOTA COM BONÛS===\nNome da aluna: %s\nNota da aluna: %.2f\n\n", ptr->nome, ptr->nota);
            
return 0;

}