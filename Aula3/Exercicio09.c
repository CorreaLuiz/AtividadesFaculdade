/*
9. Construa um programa que peça as 4 notas bimestrais e 
mostre a média.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	float n1, n2, n3, n4, m;
	
	// entrada da dados
	printf("Digite n1: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite n2: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite n3: ");
	scanf("%f",&n3);
	fflush(stdin);
	printf("Digite n4: ");
	scanf("%f",&n4);
	fflush(stdin);
	
	// processamento
	m=(n1+n2+n3+n4)/4;
	
	// saída dados
	printf("A media e %.2f\n",m);
	
	return 0;
}