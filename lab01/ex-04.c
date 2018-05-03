/*
Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema 
de milhas por hora (mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). 
Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros. Crie um programa que leia a velocidade atual do carro 
em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.
*/

#include <stdio.h>

int main()
{
	float mph, kph;
    
    printf("digite a velocidade em mph: \n");
	scanf("%f", &mph);
	kph = mph/(1.6);
    printf("velocidade em kph: %.2f\n", kph);

	// CASO A VELOCIDADE EM KPH SEJA MENOR QUE 80, ACELERE
	if (kph < 80)
		printf("ACELERE\n");

	// CASO A VELOCIDADE EM KPH ESTEJA ENTRE 80 E 100, MANTENHA
	else if ( (kph >= 80) && (kph <= 100) )
		printf("MANTENHA\n");

	// CASO A VELOCIDADE EM KPH SEJA MAIOR QUE 100, DESACELERE
	else
		printf("DESACELERE\n");

	return 0;
}
