#include <stdio.h>

// prototipos de funcao

void preenche (int*, int);

int media(int*, int);

void imprimeVec(int*, int);

int main()
{

	int* vec;
	int n, i; 
	float med = 0;
	
	printf("digite a quantidade n de elementos do vetor: ");
	scanf("%d", &n);
	
	preenche(vec, n);
	
	imprimeVec(vec, n);
	
	med = media(vec, n);
	
	printf("media: %.2f\n\n", med);

	return 0;
}


void preenche(int* Vec, int n)
{
	int elemento;
	int i;
	
	for (i = 0; i < n; i++ )
	{
		
		scanf(" %d", &elemento);
		*(Vec+i) = elemento;// acessando o vetor Vec, na posicao i, escrevendo seu conteudo
		//printf("endereco do elemento atual: %p\n", (Vec+i));
	}
}

int media(int* Vec, int n)
{
	int soma = 0; 
	float media = 0;
	
	for (int i = 0; i < n; i++)
		soma += *(Vec+i);

	media = (float)soma/(float)n;
	
	return media;
}

// FUNCAO PARA IMPRIMIR O VETOR ARMAZENADO
void imprimeVec(int* Vec, int n)
{
	int i;

	printf("vetor = {");
	
	for (i = 0; i < n-1; i++)
		printf("%d, ", *(Vec+i));
	
	printf("%d", *(Vec+i));
	printf("}\n\n");
	
}

