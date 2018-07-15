/*Leia o arquivo do exercício 8.1, caractere a
caractere, para uma string (máx 25 caracteres)
Exiba a string lida*/

#include <stdio.h>
#include <string.h>

int main()
{
	char palavra[25];
	int i = 0;
	FILE* f = fopen("arq-02.txt", "r");
	palavra[i] = fgetc(f);	

	while(palavra[i] != EOF)	
	{
		//printf("%c\n", palavra[i]);
		i++;
		palavra[i] = fgetc(f);
	}

	palavra[i] = '\0';

	fclose(f);

	printf("%s", palavra);

	return 0;
}
