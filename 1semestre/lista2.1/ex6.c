//Velocidade do piloto

#include <stdio.h>

int main ()

{

char nome[50];
float KM, H, kmH;

//entrada do nome

	printf("Digite o nome do piloto:\n");
	scanf("%s", nome);

//entrada das grandezas

	printf("digite a distância percorrida(KM):\n");
	scanf("%f", &KM);
	printf("digite quantas horas levaram:\n");
	scanf("%f", &H);

//Cálculo

	kmH = KM/H;

//Resposta

	printf("---RESULTADO---\n");
	printf("A velocidade média do %s foi %.2f km/h\n", nome, kmH);

return 0;

}
