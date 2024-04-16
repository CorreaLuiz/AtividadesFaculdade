/*
5. Construa um algoritmo que peça 2 números inteiros primeiro e 
depois e um número real. 
Calcule e mostre:
a. o dobro do primeiro mais metade do segundo .
b. a soma do triplo do primeiro mais o terceiro.
c. o terceiro elevado ao cubo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int n1, n2;
	float n3, ra, rb, rc;
	
	// Quais são as entradas de dados?
	printf("Digite o valor n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite o valor n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite o valor n3: ");
	scanf("%f",&n3);
	fflush(stdin);
	
	// Qual é o prossamento dos dados?
	
	//a. o dobro do primeiro mais metade do segundo
	ra = (2 * n1) + ((float)n2/2);
	//b. a soma do triplo do primeiro mais o terceiro.
	rb = 3 * n1 + n3;
	//c. o terceiro elevado ao cubo.
	rc = n3 * n3 * n3;
	
	// Quais são as saída de dados?
	printf("A) %f\n",ra);
	printf("B) %f\n",rb);
	printf("C) %f\n",rc);	
	
	return 0;
}
