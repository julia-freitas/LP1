/*
Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.
*/

#include <stdio.h>

int main()
{
	float preco, precoDolar;
	float dolar = 3.17;

	printf("Digite o preco em dolares: ");
	scanf("%f", &precoDolar);

	preco = (precoDolar)/(3.17);
	//printf("preco em reais: %.2f\n", preco);

	if (preco <= 1000)
		printf("BOM NEGOCIO\n");

	return 0;
}
