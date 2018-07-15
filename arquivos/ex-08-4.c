/*Altere o exercício 8.1 e 8.3 para usar a função a
seguir a ser definida:
void escreva_string (FILE* f, char* str);
A função recebe um arquivo e uma string e
escreve a string no arquivo, caractere a caractere*/

#include <stdio.h>
#include <string.h>

// prototipos de funcao
void escreva_string (FILE* f, char* str);

int main()
{
	char string[25];
	FILE* arq = fopen("ex4.txt", "w");

	printf("digite a string: ");
	scanf("%s", string);
	
	escreva_string(arq, string);
	
	return 0;
}

void escreva_string(FILE* f, char* str)
{
	int i;
	for(i = 0; i < strlen(str); i++)
	{
		fputc( (str[i]), f);
		//putchar(str[i]); // escreve no canal de saida padrao
	}


}
