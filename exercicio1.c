//Ler dois números n1 e n2
// Exibir todos os números entre n1 e n2
// Fazer em Python e em C


#include <stdio.h>

int main ()
{
	int n1, n2, aux = 0;

	printf("digite n1: ");
	scanf("%d", &n1);
	printf("digite n2: ");
	scanf("%d", &n2);

	// CASO N1 == N2
	if (n1 == n2)
	{
		printf("n1 eh igual a n2");
	}

	// CASO N1 < N2, IMPRIME NUMEROS ENTRE N1 E N2
	if (n1 < n2)
	{
		aux = n1+1;
		for( ; aux < n2; aux++)
		{
			printf("%d, ", aux);
		}
	}


	// CASO N2 < N1, IMPRIME NUMEROS ENTRE N2 E N1
	else
	{
		aux = n2+1;
		for ( ; aux < n1; aux++)
		{
			printf("%d, ", aux);
		}
	}

	return 0;
}
