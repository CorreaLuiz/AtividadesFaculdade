#include<stdio.h>
#include<stdlib.h>

int main(void){
	//Quais são as variáveis?
	int idade;
	int ano = 2024;
	
	//Qual é a entrega de dados?
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	//Qual é o processamento?
	ano = ano - idade;
	
	//Qual é a saída de dados?
	printf("Seu ano de nascimento eh: %d", ano);
	
	return 0;
}
