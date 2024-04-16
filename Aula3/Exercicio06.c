/*
6. Construa um programa que calcule a área de um círculo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float area, raio, pi=3.14;
	
	// entrada de dados
	printf("Digite o raio: ");
	scanf("%f",&raio);
	fflush(stdin);
	
	// processamento
	area=pi*raio*raio;
	
	// saída
	printf("A area e %f\n",area);
	
	return 0;
}