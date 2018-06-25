/* Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
* Crie uma função para preencher 1 ponto.
* Na main , crie um vetor com dez pontos.
* Crie uma função para preencher um dado vetor de pontos.
* Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).*/

#include <stdio.h>

#define TAM 3

// definicoes de structs
struct Ponto
{
	int x;
	int y;
};


// prototipos de funcoes
void preenche_ponto(struct Ponto* );
void preenche_vetor(struct Ponto* );// , int );
void distante(struct Ponto* );


int main()
{
	// PARA TESTAR A FUNCAO preenche_ponto
	//struct Ponto p1; // declara p1
	//preenche_ponto(&p1); // passa o ponteiro de p1 para a funcao
	
	struct Ponto ps[TAM];
	preenche_vetor(&ps[0]);//, TAM);
	
	// imprime vetor na main: OK  - nao consigo imprimir na funcao (passagem de parametros incorreta)
	int i;
	for (i = 0; i < TAM; i++)
	{
		printf("PS[%d].x : %d\n", i, (ps)[i].x ); // COMO FICARIA NA ARITMETICA DE PONTEIROS? ou *(ps+i).x
		printf("PS[%d].y : %d\n", i, (ps)[i].y );
	}

	return 0;
}


// funcao que preenche os campos do ponto - recebe end struct - retorna vazio
void preenche_ponto(struct Ponto* ploc1)
{
	scanf("%d ", &(*ploc1).x);  // acessa conteudo de p1, campo x, atraves de ploc e envia o end do campo x para o scanf
	scanf("%d ", &(*ploc1).y); // acesssa conteudo de p1 atraves de *ploc e envia o end do campo y para o scanf
	
	//printf("%d ", (*ploc1).x);
	//printf("%d ", (*ploc1).y);

}

// funcao que preenche o vetor - recebe end vetor e o tamanho - retorna vazio
void preenche_vetor(struct Ponto* ps1)//, int n)
{
	int i;
	for (i = 0; i < TAM; i++)
	{
		struct Ponto ploc2;
		preenche_ponto(&ploc2);
		//printf("ploc[%d].x: %d\n", i , (ploc2).x);
		//printf("ploc[%d].y: %d\n", i , (ploc2).y);
		ps1[i] = ploc2;
		//preciso copiar todos os campos da estrutura ploc2 para o indice i do vetor ps
	}
}

/*
// funcao que retorna o ponto mais distante - recebe o end vetor e o tamanho - retorna vazio
void distante(struct Ponto* ps3)
{
	int i, dist, maior = 0;
	struct Ponto p;
	
	p = *ps3;
	
	for (i = 0; i < TAM; i++)
	{
		//p.x = *(ps3+i).x;  // aritmetica de ponteiro para acessar cada elemento do vetor 
		//p.y = *(ps3+i).y;
		
		p = *(ps3+i);
		
		printf("%d", (*ps3+i) );//.x);
		//printf("%d", (*ps3+i).y);
		
		//printf("%d", *(ps3+i).y);
		
		printf("ponto %d: x: %d, y: %d; ", i, p.x, p.y );
		
		dist = (p).x + (p).y;
		printf("dist do ponto %d para (0,0): %d", i, dist);
		
	
	}

}
*/

/*
// GOSTARIA DE IMPRIMIR O VETOR DENTRO DA FUNCAO, MAS NAO CONSEGUI 
// funcao que imprime vetor - recebe end do vetor - retorna vazio
void imprime_vetor(struct Ponto* ps2, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("PS[%d].x : %d\n", i, (ps2)[i].x ); 
		printf("PS[%d].y : %d\n", i, (ps2)[i].y );
	}


}
*/

