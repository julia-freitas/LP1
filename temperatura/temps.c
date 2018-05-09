#include <stdio.h>

int main()
{
	int temps[50];
	int leitura = 0; // varia entre -100 e 100
	int i;
	int soma = 0;
	float media = 0;
	int aux, cont = 0;

	for(i = 0; i < 5; i++)
	{
		scanf("%d", &leitura);
		
		soma += leitura;
		//printf("leitura: %d\n", leitura);
		//printf("soma: %d\n", soma);
		
		temps[i] = leitura + '0'; // valor ascii do inteiro lido - conversao de inteiro para char
	}	

	media = soma/5.0;
	printf("media: %.2f\n", media);

	for (i = 0; i < 5; i++)
	{
		aux = temps[i] - '0';
		if (aux > media)
		{
			//printf("%d ", aux);
			cont++;
		}

	}
	printf("Quantidade de valores acima da media: %d", cont);

	return 0;
}
