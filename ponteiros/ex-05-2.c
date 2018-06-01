/*Uma conta é representada por um inteiro que guarda o saldo total:
 int minha_conta;

Uma compra na internet é efetuada por uma chamada
compra(conta,valor). A função recebe um ponteiro para uma
conta e um valor a ser debitado:
 void compra (int* conta, int valor) { ... }

Um casal tem duas contas e quer usar a conta com maior saldo
para fazer uma compra de 500 reais.

Faça um programa que leia o saldo das duas contas e efetue a
compra corretamente. Ao final o programa deve exibir os saldos
das duas contas.*/

#include <stdio.h>

//prototipos de funcao
void compra(int* , int );


int main()
{
	int conta1, conta2, valor = 500;
	int *conta;
	printf("Digite o valor da conta1: ");
	scanf("%d", &conta1);
	
	printf("Digite o valor da conta2: ");
	scanf("%d", &conta2);
	printf("\n");

	
	if (conta1 >= conta2)
		conta = &conta1;
		
	else
		conta = &conta2;

	printf("conta1: %d\n", conta1);
	printf("conta2: %d\n\n\n", conta2);
		
		if ((*conta) >= 500)
			compra(conta, valor);
		else
			printf("As contas nao tem o valor suficiente para efetuar a compra!\n\n");
			
	printf("conta1: %d\n", conta1);
	printf("conta2: %d\n", conta2);

	return 0;
}


void compra(int* Conta, int Valor)
{
	*(Conta) = *(Conta) - Valor; 


}
