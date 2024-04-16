/*
2) Faça um programa que peça um valor e mostre na tela se o valor é 
positivo ou negativo. 
R.: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// entrada
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// processamento e saída
	if(numero == 0){
		printf("Neutro\n");
	}
	if(numero>0){
		printf("Positivo\n");
	}
	if(numero<0){
		printf("Negativo\n");
	}
	
	return 0;
}
