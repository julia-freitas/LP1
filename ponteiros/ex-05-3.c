/*Agoral o casal tem uma lista de compras a efetuar:

int compras[] = { 100, 50, 80, 30, 20 };

Faça um programa que leia o saldo das duas contas e efetue as
compras corretamente, sempre usando a conta com o maior saldo.
A cada compra, o programa deve exibir os saldos das duas contas.*/

#include <stdio.h>

//prototipos de funcao
void compra(int* , int , int*);


int main()
{
	int conta1, conta2, i;
	int *conta;
	int compras[] = {100, 50, 80, 30, 20};
	
	printf("Digite o valor da conta1: ");
	scanf("%d", &conta1);
	
	printf("Digite o valor da conta2: ");
	scanf("%d", &conta2);
	printf("\n");

	
	printf("valor inicial da conta1: %d\n", conta1);
	printf("valor inicial da conta2: %d\n\n\n", conta2);
	
	
	for(i = 0; i < 5; i++)
	{	
	
		if (conta1 >= conta2)
			conta = &conta1;
		
		else
			conta = &conta2;
			
		printf("compras[%d]: %d\n", i, compras[i]);
		
		if ((*conta) >= 500)
		{
			compra(conta, i, compras);
			printf("conta1: %d\n", conta1);
			printf("conta2: %d\n\n", conta2);
		}
		
		else
			printf("As contas nao tem o valor suficiente para efetuar a compra!\n\n");
	}
			
	return 0;
}


void compra(int* Conta, int i, int* Compras)
{	
	*(Conta) = *(Conta) - Compras[i]; 
}
