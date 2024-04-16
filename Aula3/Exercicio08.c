/*
8. Construa um programa que peça dois números, calcule e mostre 
a soma dos mesmos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	int n1, n2, r;
	
	// entrada 
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// processamento
	r=n1+n2;
	
	// saída
	printf("A resposta e %i + %i = %i\n",n1 ,n2 ,r);

	return 0;
}