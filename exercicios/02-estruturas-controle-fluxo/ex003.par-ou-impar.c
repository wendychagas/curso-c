#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 03\n------------------\n"

/*
	3) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba um número
	inteiro e verifique se esse número é par ou ímpar.

*/

int main() {

	int valor;;
	printf(TITULO);
	
	// entrada;
	printf("\nDigite um valor: ");
	scanf("%d", &valor);
	
	// processamento e saída;
	if(valor % 2 == 0) {
		printf("\nO valor %d e par.\n\n", valor);
	} else {
		printf("\nO valor %d e impar.\n\n", valor);
	}
	
	system("pause");
	return 0;
}
