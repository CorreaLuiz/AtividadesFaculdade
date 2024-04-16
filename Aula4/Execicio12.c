/*
12. Uma determinada empresa vende uma 
máquina que possui seis motores. Um 
de 20 CV, dois de 1 CV, e três de 5 
CV, que custam 1500, 300 e 600 reais 
respectivamente cada motor. Existe a 
necessidade de saber quantos motores 
deverão ser comprados de cada modelo 
e quanto custará esta compra. Para 
isto elabore um programa que:

Pergunte quantas máquinas serão 
vendidas;
Calcule e apresente na tela a 
quantidade de motores que deverão 
ser comprados de cada modelo;
Calcule e apresente na tela o custo 
total por máquina, o custo por tipo 
de motor e o custo total da compra.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int q;
	printf("digite a quantidade de maquinas:");
	scanf("%i",&q);
	fflush(stdin);
	
	printf("-----quantidade-----\n");
	printf("20cv \t1cv \t5cv\n");
	printf("%i \t%i \t%i\n\n", q,2*q,3*q);
	
	printf("------compra-------\n");
	printf("valor total por maquina %.2f\n\n",(float)(1500+2*300+3*600));
	printf("20cv \t1cv \t5cv\n");
	printf("%i \t%i \t%i\n\n", 1500,2*300,3*600);
	printf("valor total da compra %.2f\n",(float)(q*1500+q*2*300+q*3*600));
	
	return 0;
}
