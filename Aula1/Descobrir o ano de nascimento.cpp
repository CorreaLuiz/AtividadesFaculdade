#include<stdio.h>
#include<stdlib.h>

int main(void){
	//Quais s�o as vari�veis?
	int idade;
	int ano = 2024;
	
	//Qual � a entrega de dados?
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	//Qual � o processamento?
	ano = ano - idade;
	
	//Qual � a sa�da de dados?
	printf("Seu ano de nascimento eh: %d", ano);
	
	return 0;
}
