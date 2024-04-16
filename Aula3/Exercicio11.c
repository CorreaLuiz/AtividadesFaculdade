/*
11. Uma firma contrata um encanador a 250,00 por dia. Crie um 
programa que solicite o número de dias trabalhados pelo encanador
e imprima a quantia líquida que deverá ser paga, sabendo-se que 
são descontados 8% para o Imposto de Renda.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	int qtd_dias;
	float salario;
	
	// entrada da dados
	printf("Digite a quantidade de dias: ");
	scanf("%i",&qtd_dias);
	fflush(stdin);
	
	// processamento
	salario=250*qtd_dias*0.92;
	
	// saída dados
	printf("O salario e R$ %.2f\n", salario);
	
	return 0;
}