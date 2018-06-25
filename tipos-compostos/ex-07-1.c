/*Crie uma struct qualquer relacionada ao seu projeto.
	Seja criativo!
Crie uma função preenche que recebe um ponteiro para o novo tipo criado 
e leia os campos para a variável passada, ex.:

struct T t;
preenche(&t);
printf(“A=%d, B=%d\n”, t.a, t.b);*/

#include <stdio.h>


struct Pessoa // struct que guarda informacoes de cada pessoa ao efetuar o cadastro
{
	int idade;
	char curso[30];
	char entrada[6];
	char saida[6];

};


void preenche( struct Pessoa* );  //recebe o apontador para a struct para acessar e modificar seu conteudo

int main()
{
	struct Pessoa Julia;
	preenche(struct Pessoa* Julia);

	return 0;
}

void preenche( struct Pessoa* Julia)  //recebe o apontador para a struct para acessar e modificar seu conteudo
{
	printf("digite sua idade: ");
	scanf("%d", (*Julia).idade);
	
	printf("digite seu curso: ");
	scanf("%s", (*Julia).curso);
	
	printf("digite seu horario padrao de entrada: ");
	scanf("%s", (*Julia).entrada);
	
	printf("digite seu horario padrao de saida: ");
	scanf("%s", (*Julia).saida);

}


