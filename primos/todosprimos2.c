/*Criar uma função todos_os_primos que recebe um inteiro max e exibe todos os
primos entre 1 e max.*/

#include <stdio.h>

// prototipos de funcao
int eh_primo(int);
int todos_os_primos(int);


int main()
{
	int num, retorno;
	
	printf("digite o valor: ");
	scanf("%d", &num);
	
	//int ret = eh_primo(num);
	retorno = todos_os_primos(num);
	//if (retorno)
		printf("[[%d]]\n\n", retorno);
	
	return 0;
}

/*
int eh_primo(int n)
{
	int resto, div, i = 0;
		
	printf("entrada: %d\n", n);
	for(i = 2; i < n; i++)
	{
		resto = n%i;
		printf("resto: %d\n", resto);
		if (resto == 0)
		{
			div++;
			printf("divisores parciais: %d", div);
		}
	}
			
	printf("divisores: %d\n\n", div);
	if (div) // nao eh primo
		return 0;
	else // eh primo
		return 1;
}
*/

int todos_os_primos(int num)
{
	int resto, divisores, i, j = 0;
	
	for (int j = 2; j < num; j++)
	{
	printf("j: %d\n", j);
		for(i = 2; i < num; i++)
		{
			printf("i: %d\n", i);
			resto = num%i;
			printf("resto: %d\n", resto);
			if (resto == 0)
			{
				divisores++;
				printf("divisores parciais: %d\n", divisores);
			}
		}
			
		printf("divisores: %d\n\n", divisores);
	
	}
	return 0; 	
}
