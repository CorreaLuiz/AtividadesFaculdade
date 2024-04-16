#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis
	int idade;
	float altura;
	char letra;
	
	// Entrada de dados
	printf("Digite idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("Digite a letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	// Saída de dados
	printf("Idade: %i\n",idade);
	printf("Altura: %f\n",altura);
	printf("Letra: %c\n",letra);
	
	return 0;
}