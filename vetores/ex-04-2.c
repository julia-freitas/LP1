/*Crie uma função preenche que receba um array bidimensional 
arr de inteiros, a quantidade de linhas l, a quantidade c de colunas, e preencha o array com l*c números lidos do teclado.

Crie uma função media que receba um array bidimensional arr, a quantidade 
de linhas l, a quantidade de colunas c ,e retorne a média entre todos os
 valores do array.
*/
#include <stdio.h>

//prototipo de funcao

void preenche(int arr[4][2], int , int );
// funcao recebe um array bidimensional de inteiros, e dois inteiros com as dimensoes do array
// preciso especificar todas as dimensões do array no prototipo e na declaracao da funcao

void imprimeArray(int arr[4][2], int , int );

int main()
{
	int l = 0;
	int c = 0;
	int arr[4][2];
	preenche(arr, 4, 2);
	imprimeArray(arr, 4, 2); //na chamada da funcao, eh so escrever o nome do array
	
	printf("tamanho de arr[4][2]: %ld\n", sizeof(arr[4][2]));
	printf("end de arr[4][2]: %p\n", &arr[4][2]);
	printf("end de arr[0][0]: %p\n", &arr[0][0]);
	printf("end de arr: %p\n", arr);		
	return 0;
}

void preenche(int arr[4][2], int l, int c)
// funcao recebe um array bidimensional de inteiros, e dois inteiros com as dimensoes do array
{
	int i = 0;
	int j = 0;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &arr[i][j]);

		}
	}
}

void imprimeArray(int arr[4][2], int l, int c)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%3.d ", arr[i][j]);
		}
		printf("\n");
		
	}

}
