/*Leia 10 strings com scanf (máx 25 caracteres)
para um vetor de strings
Escreva cada string para um arquivo, caractere a
caractere, usando um for dentro de outro for*/

#include <stdio.h>
#include <string.h>

#define QT 4 // quantidade de strings
#define MX 25 // tamanho maximo da string  

int main()
{
	char vetstr[QT][MX]; //vetor de strings
	FILE* f = fopen("ex3.txt", "w");
	
	
	int i, j;
	
	for(i = 0; i < QT; i++)
	{
		scanf("%s", vetstr[i]);
	}
	
	// ESCREVE NO CANAL DE SAIDA PADRAO
	/*
	for(i = 0; i < QT; i++)
		for (j = 0; j < strlen(vetstr[i]); j++)
			printf("%c\n", vetstr[i][j]);

	*/	

	for(i = 0; i < QT; i++)
		for (j = 0; j < strlen(vetstr[i]); j++)
			fputc(vetstr[i][j], f);
	
	
	return 0;
}


