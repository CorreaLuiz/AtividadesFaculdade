/*
4. Construa um algoritmo que peça uma temperatura em graus Celsius (ºC), 
transforme e mostre na tela a temperatura em graus Fahrenheit (ºF).
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float C, F;
	
	// Quais são as entradas de dados?
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f",&C);
	fflush(stdin);
	
	// Qual é o processamento dos dados?
	F=9/5*C+32;
	
	// Quais são as saída de dados?
	printf("A temperatura em graus Fahrenheit e %f\n",F);

	return 0;
}