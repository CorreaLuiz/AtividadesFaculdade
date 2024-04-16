#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int idade;
	float altura;
	char letra;
	
	printf("Digite a idade: ");	
	scanf("%d", &idade);	
		fflush(stdin);
	printf("Digite a letra: ");
	scanf("%c",&letra);
		fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f",&altura);
		fflush(stdin);
		
	printf("Idade: %d\n", idade);
	printf("Letra: %c\n", letra);
	printf("Altura: %f\n", altura);
	
	return 0;
}
