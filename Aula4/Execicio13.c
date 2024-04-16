/*
13. Elabore um programa para calcular a quantidade necessária de 
latas de tinta para pintar uma parede com X metros de largura 
por H metros de altura. Considere que o consumo de latas de 
tinta por metro quadrado é 3 litros e a quantidade de tinta por 
lata é 3,6 litros.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float a,l,latas;

	printf("Digite a largura da parede: ");
	scanf("%f",&l);
	fflush(stdin);
	printf("Digite a altura da parade: ");
	scanf("%f",&a);
	latas=(a*l)*3/3.6;
	printf("A quantidade de lata e %.f",latas);
	

	return 0;
}
