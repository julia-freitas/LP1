/* Leia dois inteiros a e b.
 Exiba os valores de a e b.
 Crie um ponteiro p para a variável com o maior valor.
 Através de p subtraia 50 da variável com o maior valor.
 Exiba os valores de a e b novamente. */

#include <stdio.h>

int main()
{
	int a, b, maior;
	int* p;

	scanf("%d", &a);
	scanf("%d", &b);
	printf("a: %d, b: %d\n\n", a, b);
	
	if (a > b)
		p = &a;

	else
		p = &b; 

	*(p) = *(p) - 50;  //indirecao do conteudo de p recebe : indirecao do conteudo de p - 50
	
	//printf("conteudo do end apontado por p: %d\n\n", *p); //imprime conteudo do end apontado por p: a ou b
	printf("a: %d, b: %d\n\n", a, b);

	return 0;
}
