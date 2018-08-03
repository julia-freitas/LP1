/*Criar um vetor vet de 5 posições
 Ler 5 números e guardá-los em vet
 Exbir todos os números de vet
 Ler um outro número I
 Remover o valor de vet no índice I
 Manter o vetor sem buracos*/

#include <stdio.h>

int main()
{
	int vet[5] = {1, 2, 3, 4, 5};
	int N = 0; // variavel para guardar o tamanho do vetor - deve ser decrementada para tirar o ultimo elemento do vetor
	int i, j, k, I;
	
	/*
	// guarda os elementos no vetor
	for(i = 0; i < 5; i++)
	{
		printf("digite a posicao %d do vetor: ", i);
		scanf("%d", &vet[i]);
		N++;		
	} 
	*/
	
	printf("vetor = [");
	
	// imprime o vetor
	for (j = 0; j < 4; j++)
	{
		printf("%d, ", vet[j]);
	
	}
	printf("%d]", vet[j]);
	
	
	printf("digite I:");
	scanf("%d", &I);
	
	// removendo o elemento de indice I
	// comeca de I, pois quero mudar os valores do vetor a partir de I
	
	N--;
	for(k = I; k < N; k++)
	{
		vet[k] = vet[k+1]; 
	}
	
	// imprime o vetor
	for (j = 0; j < 4; j++)
	{
		printf("%d, ", vet[j]);
	
	}
	printf("%d]", vet[j]);
	

	return 0;
}


