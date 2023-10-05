#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO \n------------------\n"

/*
	9) Desenvolva um algoritmo que pe�a ao usu�rio que insira dois n�meros inteiros positivos 
	A e B, no qual A deve ser menor que B (sup�e-se que o usu�rio ir� respeitar esse 
	enunciado). O algoritmo deve mostrar, na tela, todos os n�meros �mpares 
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
	printf("\n�mpares: \n");
	while(intA <= intB) {
		if(intA % 2 == 1) {
			printf("%d ", intA);
		}
		intA++;
	}
	printf("\n");
	
	// sa�da;
	
	system("pause");
	return 0;
}
