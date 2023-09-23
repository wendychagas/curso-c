#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 07\n------------------\n"

/*
	7) (Adaptado de ASCENCIO e CAMPOS, 2008) A nota final de um estudante é calculada a
	partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma
	avaliação semestral e a um exame final. A média das três notas mencionadas
	anteriormente obedece aos pesos a seguir:
	
	|-------------------------------|---------------|
	|			Nota				|		Peso	|
	|-------------------------------|---------------|
	|	Trabalho de laboratório		|		2		|
	|	Avaliação semestral			|		3		|
	|	Exame final					|		5		|
	|-------------------------------|---------------|
	
	Faça um programa que receba as três notas, calcule e mostre a média ponderada e o
	conceito que segue a tabela abaixo:
	
	|---------------------------|---------------|
	|		Média ponderada		|	Conceito	|
	|---------------------------|---------------|
	|		8,0 ~ 10,0 			|		A 		|
	|		7,0 ~ 8,0 			|		B 		|
	|		6,0 ~ 7,0 			|		C 		|
	|		5,0 ~ 6,0 			|		D 		|
	|		0,0 ~ 5,0 			|		E		|
	|---------------------------|---------------|
	
*/

int main() {

	float trabalho, avaliacao, exame, media;
	printf(TITULO);
	
	// entrada;
	printf("\nTrabalho de Laboratorio\nNota: "); 
	scanf("%f", &trabalho);
	fflush(stdin);
	
	printf("\nAvaliacao Semestral\nNota: ");
	scanf("%f", &avaliacao);
	fflush(stdin);
	
	printf("\nExame Final\nNota: ");
	scanf("%f", &exame);
	fflush(stdin);
	
	// processamento;
	media = (trabalho*2 + avaliacao*3 + exame*5)/10;
	
	// saída;
	printf("\nMedia: %.2f - ", media);
	if(media > 10) {
		printf("\nERRO!\n\n");
	} else if(media >= 8) {
		printf("Conceito A.\n\n");
	} else if(media >= 7) {
		printf("Conceito B.\n\n");
	} else if(media >= 6) {
		printf("Conceito C.\n\n");
	} else if(media >= 5) {
		printf("Conceito D.\n\n");
	} else if(media >= 0) {
		printf("Conceito E.\n\n");
	} else {
		printf("ERRO!\n\n");
	}
	
	system("pause");
	return 0;
}
