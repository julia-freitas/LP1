/*Crie um programa que reproduza o estado do
slide anterior antes de remover o índice 2
 Cada caixa é um struct Caixa
 O valor é o número dentro da caixa
 O prox é o endereço da próxima caixa
 Teste o programa, ex.:

printf(“%d->%d->...\n”, c0.valor,
*(c0.prox).valor, ...)

DESENHAR O MAPA DA MEMORIA PARA OBSERVAR COMO ALOCA E DESALOCA A MEMORIA DO COMPUTADOR
*/

#include <stdio.h>

struct Caixa {
int valor;
struct Caixa* prox;
};


int main()
{
	struct Caixa c4 = {5, NULL};
	struct Caixa c3 = {4, &c4};
	struct Caixa c2 = {3, &c3};
	struct Caixa c1 = {2, &c2};
	struct Caixa c0 = {1, &c1};
	
	printf("%d", c0.valor);
	printf("%", (*(c0.prox)).valor);
	//printf("%);
	
	return 0;
}
