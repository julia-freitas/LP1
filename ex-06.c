//Faça um programa que leia um número N e calcule o somatório a seguir:

#include <stdio.h>

int main()
{
	int i, n, somatorio;
	scanf("%d", &n);

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			somatorio += i*i;
		}
		printf("%d\n", somatorio);
	}
	else 
		printf("entrada invalida\n");
	
	return 0;
}
