/* Crie uma função eh_primo que recebe um inteiro n e retorna se ele é primo ou não.
Dicas:
A operação % calcula o resto entre dois valores:
11 % 4 = 3
Em C, tipicamente usamos 1 e 0 para representar verdadeiro e falso, respectivamente. */

#include <stdio.h>

//prototipo de funcao
int eh_primo(int);

int main()
{
	int num;
	
	printf("digite o valor: ");
	scanf("%d", &num);
	
	int ret = eh_primo(num);
	
	if (!ret)
		printf("nao eh primo\n");
	else
		printf("eh primo\n");
	
	return 0;
}

int eh_primo(int n)
{
	int resto, divisores, i = 0;
	
	
	for(i = 2; i < n; i++)
	{
		resto = n%i;
		
		if (resto == 0)
			divisores++;
	}
			
		if (divisores) // nao eh primo
			return 0;
		else // eh primo
			return 1;
}
