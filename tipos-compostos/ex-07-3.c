//FALTA O MAPA DO JOGO

/*Um jogo possui 10 personagens, cada um com as seguintes características:
 Um número que representa a sua “identidade”
 Um posição (x,y) no espaço bi-dimensional
 Uma quantidade de pontuação (inicialmente 0)

* Crie uma struct para representar um personagem
 A posição também deve ser uma struct
 Crie um vetor com 10 personagens
 
* Crie uma função que leia um personagem
 A função deve usar uma função que lê a posição
 Crie um loop para ler todos os 10 personagens
 
* Desenhe um mapa do jogo, e.x.:
 Use funções auxiliares! */
 
#include <stdio.h>

#define TAM 3

// definicoes de structs
struct Posicao
{
	int x;
	int y;
};

struct Personagem
{
	int id;
	struct Posicao pos;
	int pontos;
};

// prototipos de funcoes
void le_posicao(struct Posicao*);
void le_personagem(struct Personagem* );


int main()
{
	//struct Posicao p1;
	//le_posicao(&p1);
	
	struct Personagem vet[TAM];	
	
	int i;
	for (i = 0; i < TAM; i++)
	{
		//printf("pontos[%d]: %d\n", i, vet[i].pontos);
		le_personagem(&vet[i]);
		printf("id[%d]: %d\n", i, vet[i].id);
		printf("vet[%d].x: %d, ", i, vet[i].pos.x);
		printf("vet[%d].y: %d\n", i, vet[i].pos.y);
		printf("pontos[%d]: %d\n", i, vet[i].pontos);
	}
	
	return 0;
}

 // funcao que preenche a struct posicao - recebe o end da struct - retorna vazio
void le_posicao(struct Posicao* ploc1)
{
	scanf("%d", &(*ploc1).x);
 	scanf("%d", &(*ploc1).y);
}

// funcao que preenche a struct personagem - recebe end do vetor de personagens e tamanho do vetor - retorna vazio
void le_personagem( struct Personagem* ploc2)
{
	scanf("%d", &(*ploc2).id); 
 	le_posicao(&(*ploc2).pos);
 	scanf("%d", &(*ploc2).pontos);
}



