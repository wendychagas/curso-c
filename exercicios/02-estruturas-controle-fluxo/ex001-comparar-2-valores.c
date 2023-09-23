#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 01\n------------------\n"

/*
	1) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba dois números
	e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os
	números são iguais".
*/

int main() {
	
	int valorA, valorB, maior, menor, igual;
	printf(TITULO);
	
	// entrada;
	printf("\nDigite o primeiro valor: ");
	scanf("%i", &valorA);
	printf("Digite o segundo valor: ");
	scanf("%i", &valorB);
	
	// processamento com saída;
	if(valorA > valorB) {
		//maior = valorA;
		//menor = valorB;
		printf("%i e maior que %i.\n", valorA, valorB);
	} else if(valorA < valorB) {
		//maior = valorB;
		//menor = valorA;
		printf("%i e maior que %i.\n", valorB, valorA);
	} else {
		//igual = valorA;
		//igual = valorB;
		printf("%i e %i sao iguais.\n", valorA, valorB);
	}
	
	system("pause");
	return 0;
}
