#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 09\n------------------\n"

/*
	9) Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos 
	A e B, no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse 
	enunciado). O algoritmo deve mostrar, na tela, todos os números ímpares 
	compreendidos entre A e B (inclusive).
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int intA, intB;
	// entrada;
	
	printf("Inicial: ");
	scanf("%d", &intA);
	fflush(stdin);
	
	printf("Final: ");
	scanf("%d", &intB);
	fflush(stdin);
	
	// processamento;
	printf("\nÍmpares: \n");
	while(intA <= intB) {
		if(intA % 2 == 1) {
			printf("%d ", intA);
		}
		intA++;
	}
	printf("\n");
	
	// saída;
	
	system("pause");
	return 0;
}
