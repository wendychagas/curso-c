#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 04\n------------------\n"

/*
	4) Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação
	entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a
	subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.
	
*/

int main() {

	float valor1, valor2;
	float resultado;
	printf(TITULO);
	
	// entrada;
	printf("\nValor 1: ");
	scanf("%f", &valor1);
	fflush(stdin);
	
	printf("Valor 2: ");
	scanf("%f", &valor2);
	fflush(stdin);
	
	// processamento e saída;		
	if(valor1 == valor2) {
		resultado = valor1 * valor2;
		printf("\nMultiplicacao: %.2f\n\n", resultado);
	} else if(valor1 > valor2) {
		resultado = valor1 - valor2;
		printf("\nSubtracao: %.2f\n\n", resultado);
	} else {
		resultado = valor1 + valor2;
		printf("\nSoma: %.2f\n\n", resultado);
	}

	system("pause");
	return 0;
}
