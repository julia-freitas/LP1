/*Leia uma string com scanf (máx 25 caracteres)
Escreva a string para um arquivo, caractere a
caractere, usando um for

A função strlen retorna o tamanho de uma string
É necessário incluir a biblioteca string.h*/

#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[25];
	int i;
	FILE* f	= fopen("arq-02.txt", "w");

	scanf("%s", palavra);

	for (i = 0; i < strlen(palavra); i++ )
	{
		fputc(palavra[i], f);
	}
	//palavra[i] = '\0';
	
	
	fclose(f);
	
	return 0;
}
