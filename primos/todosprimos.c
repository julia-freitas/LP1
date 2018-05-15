/*Cria uma função todos_os_primos que recebe um inteiro max e exibe todos os
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
	printf("primos: ");
	retorno = todos_os_primos(num);

	return 0;
}

int eh_primo(int n)
{
	int resto, i = 0;

	for(i = 2; i < n; i++)
	{
		resto = n%i;

		if (resto == 0) // se tiver divisor, nao eh primo
			return 0;
	}
			
	return 1;
}


int todos_os_primos(int num)
{
	int resto, divisores, i, j = 0;
	
	for (int j = 2; j < num; j++)
	{
		int ret = eh_primo(j);
	
    if (ret)
			printf("%d ", j);
	
	}
	
}
