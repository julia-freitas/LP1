#include <stdio.h>

// prototipos

void le_Posicao();

struct Personagem
{
	char imagem; //pediu para corrigir: substituir o char por int
	struct Posicao ps[10]; //struct que guarda a posicao do personagem
	int pontuacao;
}

struct Posicao
{
	int x;
	int y;
}

int main()
{
	int i = 0;
	//for(i = 0; i < 10; i++)
	//{ 
	//struct Personagem p[10];
		le_posicao();
		printf("%d", p[i].x);
		printf("%d", p[i].y);
	//}
}
/*
void le_Personagem()
{
	

}
*/
void le_Posicao(int i; ) // recebe o ponteiro pra struct posicao
{						 // recebe o i p indicar o num do elemento
	struct Personagem ps[10];	
	scanf("%d", p[i].x);
	scanf("%d", p[i].y);
		
}
