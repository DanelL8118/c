//exercício 18: velocidade de download

#include <stdio.h>
#include <math.h>

int main ()

{
int TEMPO, A, B, C;
float MB, MBPS;
B = 60;

//entrada do tamanho do arquivo

	printf("digite o tamanho do arquivo(MB):\n");
	scanf("%f", &MB);

//entrada da velocidade do download

	printf("digite a velocidade do download(MBPS):\n");
	scanf("%f", &MBPS);

//Processamento

	A = MB/MBPS;
	TEMPO = A/B;
	C = A%B;

//RESPOSTA

if (MB < 0)
{
	printf("erro, valores inválidos!(valores<0)\n");
}

else if (MBPS < 0)
{
	printf("erro, valores inválidos!;(valores<0)\n");
}

else
{
	printf("---RESULTADO---\n");
	printf("Tamanho do arquivo: %.2f MB\n", MB);
	printf("Velocidade do download: %.2f MBps\n", MBPS);
	printf("Tempo para instalação: %.1d:%.0d minutos\n", TEMPO, C);
}

return 0;

}
