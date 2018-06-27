//RESOLVE PARCIALMENTE O PROBLEMA

/* Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
* Crie uma função para preencher 1 ponto.
* Na main , crie um vetor com dez pontos.
* Crie uma função para preencher um dado vetor de pontos.
* Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).*/

#include <stdio.h>
#include <math.h>

#define TAM 3

// definicoes de structs
struct Ponto
{
	int x;
	int y;
};


// prototipos de funcoes
void preenche_ponto(struct Ponto* );
void preenche_vetor(struct Ponto* , int);
struct Ponto distante(struct Ponto* );
void imprime_vetor(struct Ponto* ps2, int n);

int main()
{
<<<<<<< HEAD
	struct Ponto p1;
	struct Ponto vet[3];

	//preenche_ponto(&p1);
=======
	// PARA TESTAR A FUNCAO preenche_ponto
	//struct Ponto p1; // declara p1
	//preenche_ponto(&p1); // passa o ponteiro de p1 para a funcao
>>>>>>> ba0abe70d557db203eeecccba64633adf76c7fd8
	
	struct Ponto ps[TAM];
	preenche_vetor(&ps[0], TAM);
	imprime_vetor(ps, TAM);
	struct Ponto maior = distante(ps);
	printf("MAIOR {%d,%d} \n\n", maior.x, maior.y);
	
<<<<<<< HEAD
	preenche_vetor(vet, 3);

=======
>>>>>>> ba0abe70d557db203eeecccba64633adf76c7fd8
	return 0;
}


// funcao que preenche os campos do ponto - recebe end struct - retorna vazio
void preenche_ponto(struct Ponto* ploc1)
{
	scanf("%d", &(*ploc1).x);  // acessa conteudo de p1, campo x, atraves de ploc e envia o end do campo x para o scanf
	scanf("%d", &(*ploc1).y); // acessa conteudo de p1 atraves de *ploc e envia o end do campo y para o scanf

}

// funcao que preenche o vetor - recebe end vetor e o tamanho - retorna vazio
void preenche_vetor(struct Ponto* ps1, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
<<<<<<< HEAD
	    struct Ponto p; // cria a struct Ponto
		preenche_ponto(&p); // passa a struct Ponto p para a funcao
		vet[i] = p; // preenche o elem i do vetor com a struct completa
		printf("%d", &(*vet[i]).x);
		printf("%d", &(*vet[i]).y);
=======
		struct Ponto ploc2;
		preenche_ponto(&ploc2);
		ps1[i] = ploc2;
		//preciso copiar todos os campos da estrutura ploc2 para o indice i do vetor ps
>>>>>>> ba0abe70d557db203eeecccba64633adf76c7fd8
	}
}


// funcao que retorna o ponto mais distante - recebe o end vetor e o tamanho - retorna vazio
struct Ponto distante(struct Ponto* ps3)
{
	int i, dist, maior = 0;
	struct Ponto p;
	struct Ponto ret; // ret recebe a copia da struct com a maior distancia
	
	
	for (i = 0; i < TAM; i++)
	{		
		p = *(ps3+i);
		
		//printf("ponto %d: x: %d, y: %d;\n", i, p.x, p.y );
		
		dist = sqrt( pow((double)(p).x, 2) + pow((double)(p).y, 2) );
		//printf("dist do ponto %d para (0,0): %d\n\n", i, dist);
		
		if (dist > maior) 
		{
			maior = dist;
			ret = p;
		}
	}
	// ao final do loop, encontro a struct com maior distancia do centro e retorno ret que guarda a struct
	return ret;
}


// funcao que imprime vetor - recebe end do vetor e o tamanho - retorna vazio
void imprime_vetor(struct Ponto* ps2, int n)
{
	int i;
	printf("vetor = { ");
	for (i = 0; i < n; i++)
	{
		//printf("PS[%d].x : %d\n", i, (ps2)[i].x ); 
		//printf("PS[%d].y : %d\n", i, (ps2)[i].y );
		printf("{");
		printf("%d" , (ps2)[i].x );
		printf(", ");
		printf("%d" , (ps2)[i].y );
		printf("}");
		printf(" ");		
	}
	printf("}\n\n");
}

