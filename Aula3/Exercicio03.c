/*
3. Construa um algoritmo que peça a temperatura em graus Fahrenheit
(ºF), transforme e mostre na tela a temperatura em graus Celsius 
(ºC). C=5*(F-32)/9
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float C, F;
	
	// Quais são as entradas de dados?
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&F);
	fflush(stdin);
	
	// Qual é o processamento dos dados?
	C=5*(F-32)/9;
	
	// Quais são as saída de dados?
	printf("A temperatura em graus Celsius e %f\n",C);

	return 0;
}