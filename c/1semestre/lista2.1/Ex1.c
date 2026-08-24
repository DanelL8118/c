//Média de notas

#include <stdio.h>

int main ()

{

char nome[50];
float N1, N2, N3, media;

//entrada do nome

	printf("Digite o nome do aluno:\n");
	scanf("%s", nome);

//entrada das notas

	printf("digite as três notas do aluno:\n");
	scanf("%f %f %f", &N1, &N2, &N3);

//Cálculo

	media = 3 / (1/N1+1/N2+1/N3);

//Resposta

if (N1 < 0 || N2 < 0 || N3 < 0)
{
	printf("notas inseridas inválidas!\n");
}
else
{
	printf("---RESULTADO---\n");
	printf("nome do aluno: %s\n", nome);
	printf("nota 1: %.1f nota 2: %.1f nota 3: %.1f\n", N1, N2, N3);
	printf("média das notas: %.1f\n", media);
}

return 0;

}












