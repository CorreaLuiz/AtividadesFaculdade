/*
7. Construa um programa que converta metros para centímetros.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	float metros;
	
	// entrada
	printf("Digite o valor em metros: ");
	scanf("%f",&metros);
	fflush(stdin);
	
	// saída
	printf("O valor em centimetros e %.1f cm\n",metros*100);
	
	return 0;
}