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


void preenche(struct Pessoa* nome);  //recebe o apontador para a struct para acessar e modificar seu conteudo

int main()
{
	struct Pessoa julia;
	preenche(&julia);

	printf("idade = %d\n, curso = %s\n, entrada = %s\n, saida = %s\n", julia.idade, julia.curso, julia.entrada, julia.saida);
	return 0;
}

void preenche(struct Pessoa* p)  //recebe o apontador para a struct para acessar e modificar seu conteudo
{
	printf("digite sua idade: ");
	scanf("%d", &(*p).idade);
	
	printf("digite seu curso: ");
	scanf("%s", (*p).curso);
	
	printf("digite seu horario padrao de entrada: ");
	scanf("%s", (*p).entrada);
	
	printf("digite seu horario padrao de saida: ");
	scanf("%s", (*p).saida);

}
