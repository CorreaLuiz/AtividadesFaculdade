/*
14. Construa um algoritmo que peça o salário bruto mensal de um 
funcionário, calcule e apresente os valores conforme modelo abaixo:
Salário Bruto           : R$
(-) IR           (15%) : R$
(-) INSS      (11%)   : R$
(-) Sindicato ( 3%)   : R$
Salário líquido          : R$
Obs.: Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto – Descontos
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float salario;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	fflush(stdin);
	printf("salario bruto %.2f\n",salario);
	printf("- ir (15%%) %.2f\n",salario*0.15);
	printf("- inss (11%%) %.2f\n",salario*0.11);
	printf("- sindicato (3%%) %.2f\n",salario*0.03);
	printf("salario liquido %.2f\n",salario - (salario*0.15+salario*0.11+salario*0.03));
	
	return 0;
}
