/*
10.Construa um programa que pergunte quanto você ganha por 
hora e o número de horas trabalhadas no mês. Calcule e mostre 
o total do seu salário no referido mês.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	float valor_hora, salario;
	int quantidade_horas;
	
	// entrada da dados
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f",&valor_hora);
	fflush(stdin);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%i",&quantidade_horas);
	fflush(stdin);
	
	// processamento
	salario = valor_hora*quantidade_horas;
	
	// saída dados
	printf("O salario e R$ %.2f\n",salario);

	return 0;
}