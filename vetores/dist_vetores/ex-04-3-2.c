/*Crie uma funcao para preencher 1 ponto.
Na main, crie um vetor com dez pontos.
Crie uma funcao para preencher um dado vetor de pontos.
Crie uma funcao que receba um vetor de pontos e retorne o ponto mais distante de (0,0).*/

#include <stdio.h>
#include <math.h>

#define TAMV 2

struct Ponto
{
	int x;
	int y;
	//int dist;
};

// prototipos de funcao
void preenche_ponto(struct Ponto* );
void preenche_vetor(struct Ponto* , int );
void imprime_vetor(struct Ponto* , int);
struct Ponto* calc_dist(struct Ponto* psloc, int);


int main()
{
	struct Ponto p1;
	preenche_ponto(&p1);
	struct Ponto ps[TAMV];
	//preenche_vetor(&ps[0], TAMV);
	//imprime_vetor(&ps[0], TAMV);
	
	printf("%d", p1.x);
	printf("%d", p1.y);
	
	return 0;	
}

// funcao que preenche a struct - retorna vazio - recebe o end da struct
void preenche_ponto(struct Ponto* p)
{
	printf("digite x:");
	scanf("%d", &(*p).x);// acessa p1 atraves do p* e preenche o campo x
	printf("digite y:");
	scanf("%d", &(*p).y);// acessa p1 atraves do p* e preenche o campo y	

}

// funcao que preenche o vetor - retorna vazio - recebe o end do vetor e o tamanho do vetor
void preenche_vetor(struct Ponto* psloc)
{	
	int i;
	for (i = 0; i < TAMV; i++)
	{
		struct Ponto ploc; // cria ponto
		preenche_ponto(&ploc); // preenche ponto
		(*psloc)[i] = ploc; // elemento i do vetor recebe a struct preenchida
	}
}


void imprime_vetor(struct Ponto* ps, int)
{
	int i;
	for (i = 0; i < TAMV; i++)
	{
		printf("%d ", &(*ps[i]).x );
		
	}

}

// funcao encontra o mais distante - retorna o end de struct - recebe o end do vetor
struct Ponto* calc_dist(struct Ponto* psloc, int)
{
	int i, distloc;
	int maior = 0;
	struct Ponto* psret;
	
	for (i = 0; i < TAMV; i++)
	{
		distloc = (*psloc[i]).x + (*psloc[i]).y; //sqrt( pow((psloc[i]*).x, 2) + pow((psloc[i]*).y, 2) );
		if (distloc > maior)
		{
			maior = distloc;
			psret = psloc;
		}
	}
	return psret;
}

