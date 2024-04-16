/*
5) Faça um programa que peça um número e informe se o número é 
inteiro ou quebrado. 
R.: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float numero;
	
	// entrada
	printf("Digite o numero: ");
	scanf("%f",&numero);
	fflush(stdin);
	
	// processamento e saída
	if(numero == (int)numero){
		printf("O numero e inteiro\n");
	}else{
		printf("O numero e quebrado\n");
	}
	
	return 0;
}