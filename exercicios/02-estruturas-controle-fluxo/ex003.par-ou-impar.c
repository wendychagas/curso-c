#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 03\n------------------\n"

/*
	3) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba um n�mero
	inteiro e verifique se esse n�mero � par ou �mpar.

*/

int main() {

	int valor;;
	printf(TITULO);
	
	// entrada;
	printf("\nDigite um valor: ");
	scanf("%d", &valor);
	
	// processamento e sa�da;
	if(valor % 2 == 0) {
		printf("\nO valor %d e par.\n\n", valor);
	} else {
		printf("\nO valor %d e impar.\n\n", valor);
	}
	
	system("pause");
	return 0;
}
