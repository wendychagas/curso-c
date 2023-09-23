#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 07\n------------------\n"

/*
	7) (Adaptado de ASCENCIO e CAMPOS, 2008) A nota final de um estudante � calculada a
	partir de tr�s notas atribu�das respectivamente a um trabalho de laborat�rio, a uma
	avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas
	anteriormente obedece aos pesos a seguir:
	
	|-------------------------------|---------------|
	|			Nota				|		Peso	|
	|-------------------------------|---------------|
	|	Trabalho de laborat�rio		|		2		|
	|	Avalia��o semestral			|		3		|
	|	Exame final					|		5		|
	|-------------------------------|---------------|
	
	Fa�a um programa que receba as tr�s notas, calcule e mostre a m�dia ponderada e o
	conceito que segue a tabela abaixo:
	
	|---------------------------|---------------|
	|		M�dia ponderada		|	Conceito	|
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
	
	// sa�da;
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
