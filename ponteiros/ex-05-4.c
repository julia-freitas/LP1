#include <stdio.h>

//prototipo de funcao
void troca(int*, int*);

int main()
{
	int x = 10;
	int y = 20;
	//printf("p1: %p, conteudo de p1: %d, p2: %p, conteudo de p2: %d\n", p1, *p1, p2, *p2);

	troca(&x, &y);
	//printf("p1: %p, conteudo de p1: %d, p2: %p, conteudo de p2: %d\n", p1, *p1, p2, *p2);

	printf("%d %d\n", x, y);
	
	return 0;
}




void troca(int* p1, int* p2)
{
	int aux;
	aux = *p1; // aux = &x
	*p1 = *p2;  // p1 = &y
	*p2 = aux; // p2 = &x
}


