/*Crie uma struct que contenha outra struct.
	Seja criativo!
Crie uma função preenche2 que recebe um ponteiro para o novo tipo criado e 
leia os campos para a variável passada.

A função deve usar a preenche do exercício anterior.*/

#include <stdio.h>


// definicao de structs

struct equipe
{
	char categoria[15]; // opcoes: sumo_3kg; sumo_lego; mini_sumo; seguidor_linha; beetleweight; 
	char subsistema[12]; // opcoes: programacao; eletronica; potencia; mecanica;
};

struct Pessoa
{
	int idade;
	char curso[30];
	char entrada[5];
	char saida[5];
	struct equipe robot; // opcoes: robot; IEEE_RAS; IEEE_WIE; IEEE_PES; IEEE_CS
};


// prototipos de funcao
void preenche(struct Pessoa* );
void preenche2(struct Pessoa* );


int main()
{
	struct Pessoa julia;
	preenche2(&julia);
	
	printf(" idade: %d,\n curso: %s,\n entrada: %s,\n saida: %s,\n", julia.idade, julia.curso, julia.entrada, julia.saida);
	printf(" categoria: %s,\n subsistema: %s\n", julia.robot.categoria, julia.robot.subsistema);

}


//funcao que preenche pessoa - recebe o apontador para a struct para acessar e modificar seu conteudo - retorna vazio
void preenche(struct Pessoa* p)
{
	printf("digite sua idade: ");
	scanf("%d", &(*p).idade);
	//printf("%d\n", (*p).idade);
	
	printf("digite seu curso: ");
	scanf("%s", (*p).curso);
	//printf("%s\n", (*p).curso);
	
	printf("digite seu horario padrao de entrada: ");
	scanf("%s", (*p).entrada);
	//printf("%s\n", (*p).entrada);
	
	printf("digite seu horario padrao de saida: ");
	scanf("%s", (*p).saida);
	//printf("%s\n", (*p).saida);
}

//funcao que preenche pessoa - recebe o apontador para a struct para acessar e modificar seu conteudo - retorna vazio
void preenche2(struct Pessoa* p1)
{
	preenche(&(*p1));
	
	printf("digite a categoria de robo que participa: ");
	scanf("%s", (*p1).robot.categoria);
	//printf("%s\n", (*p1).robot.categoria);

	printf("digite o subsistema que participa: ");
	scanf("%s", (*p1).robot.subsistema);
	//printf("%s\n", (*p1).robot.subsistema);

}
