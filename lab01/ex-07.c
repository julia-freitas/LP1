// Shared via Compiler App https://g633x.app.goo.gl/TPlw
/* O Campeonato Brasileiro estÃ¡ na reta final com 20 times na disputa. Uma vitÃ³ria vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, leia o nome, nÃºmero de vitÃ³rias, nÃºmero de empates e nÃºmero de derrotas. Ao final, o programa deve escrever o nome dos times com mais e menos pontos atÃ© o momento. */

#include <stdio.h>

#include <string.h>

int main()
{

	int i=0;
	int pont=0;
	int pont_max= 0;
	int vitorias= 0;
	int empates= 0;
	int derrotas = 0;

	int pont_min = 100000;
	char nome[30];
	char nome_max[30];
	char nome_min[30];
	for (i = 0; i < 20; i++)
	{
		printf("nome: ");
		scanf("%s", nome);
		printf("vitorias: ");
		scanf("%d", &vitorias);
		printf("empates: ");
		scanf("%d", &empates);
		printf("derrotas: ");
		scanf("%d", &derrotas);

		pont = vitorias*3 + empates*1 + derrotas*0;
		//printf("%s", nome);
		//printf("vitorias: ", vitorias);
		//printf("empates: ", empates);
		//printf("derrotas: ", derrotas);
		//printf("%d\n\n", pont);
		if (pont >= pont_max)
		{
			strncpy( nome_max, nome, strlen(nome) );
			pont_max = pont;
		}

		if (pont <= pont_min)
		{
			strncpy( nome_min, nome, strlen(nome) );
			pont_min = pont;
		}
	}

	//printf("minimo: %s , pontos: %d\n", nome_min, pont_min);
	//printf("maximo: %s , pontos: %d\n", nome_max, pont_max);

	printf("minimo: %s\n", nome_min);
	printf("minimo: %s\n", nome_max);

	return 0;
}
