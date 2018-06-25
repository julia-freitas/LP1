//RESOLVE PARCIALMENTE O PROBLEMA

/* Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
 Crie uma função para preencher 1 ponto.
 Na main, crie um vetor com dez pontos.
 Crie uma função para preencher um dado vetor de pontos.
 Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).*/

#include <stdio.h>

struct Ponto 
{
	int x;
	int y;
};

// prototipos de funcao
void preenche_ponto(struct Ponto*);

void preenche_vetor(struct Ponto* , int);

int main()
{
	struct Ponto p1;
	struct Ponto vet[3];

	//preenche_ponto(&p1);
	
	//printf("p1.x: %d\n", p1.x);
	//printf("p1.y: %d\n", p1.y);
	
	preenche_vetor(vet, 3);

	return 0;
}


void preenche_ponto(struct Ponto* p)
{
	//p eh apontador para a struct Ponto p1 passada
	scanf("%d", &(*p).x); // acessa o endereco de p, faz indirecao de p, substituindo pelo conteudo de p1, e entrega o endereco do campo p1.x para o scanf

	scanf("%d", &(*p).y); // indirecao de p, substitui pelo conteudo de p1, e entrega o endereco do campo p1.x para o scanf
	
}

void preenche_vetor(struct Ponto* vet, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
	    struct Ponto p; // cria a struct Ponto
		preenche_ponto(&p); // passa a struct Ponto p para a funcao
		vet[i] = p; // preenche o elem i do vetor com a struct completa
		printf("%d", &(*vet[i]).x);
		printf("%d", &(*vet[i]).y);
	}

}
