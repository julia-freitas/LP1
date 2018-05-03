/*
Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de todos os números lidos.
*/

#include <stdio.h>

int main()
{
	float num, soma;
	scanf("%f", &num);
	soma = num;
	while (num != 0)
	{
		scanf("%f", &num);
		soma += num;
	} 
	printf("%.2f\n", soma);
	return 0;
}
