/*
Solicite a idade de uma pessoa e informe a ano de nascimento.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int idade, ano;
	
	// Qual é a entrada de dados?
	printf("Digite a idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	// Qual é o processamento?
	ano = 2024 - idade;
	
	// Qual é a saída de dados?
	printf("O ano e %i\n",ano);
	
	return 0;
}