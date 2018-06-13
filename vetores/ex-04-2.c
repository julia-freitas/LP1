#include <stdio.h>
#include <math.h>


#define LINHAS 4
#define COLUNAS 2

//prototipos de funcao

void preenche(int vet[LINHAS][COLUNAS], int , int );
// funcao recebe um array bidimensional de inteiros, e dois inteiros com as dimensoes do array
// preciso especificar todas as dimensões do array no prototipo e na declaracao da funcao, 
//caso contrario, teria que usar alocacao dinamica

void imprimeArray(int vet[LINHAS][COLUNAS], int , int );

float media(int vet[LINHAS][COLUNAS], int , int);

int main()
{
	int l = 0;
	int c = 0;
	int vet[LINHAS][COLUNAS];
	float med = 0;
	preenche(vet, LINHAS, COLUNAS); //na chamada da funcao, eh so escrever o nome do array
	//imprimeArray(vet, LINHAS, COLUNAS); // imprime a matriz recebida
	
	med = media(vet, LINHAS, COLUNAS);
	
	printf("%.2f\n", med);
	return 0;
}

void preenche(int vet[LINHAS][COLUNAS], int l, int c)
// funcao recebe um array bidimensional de inteiros, e dois inteiros com as dimensoes do array
{
	int i = 0;
	int j = 0;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Digite o elemento vet[%d][%d]: ", i, j);
			scanf("%d", &vet[i][j]);

		}
	}
}

void imprimeArray(int vet[4][2], int l, int c)
// funcao que imprime a matriz recebida
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%3.d ", vet[i][j]);
		}
		printf("\n");
		
	}

}


float media(int vet[4][2], int l, int c)
{
	int i = 0;
	int j = 0;
	int soma = 0;
	float med = 0;


	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			soma += vet[i][j];
		}
	}
	
	med = soma/(float)(LINHAS*COLUNAS);
	
	return med;

}

