#include <stdio.h>
#include <string.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO 14\n------------------\n"

/*
	14) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba dois números
	maiores que zero, calcule e mostre um elevado ao outro.
*/

int main() {
	
	float a, b, potencia;
	printf(TITULO);
	
	// entrada;
	printf("\nDigite um numero: ");
	scanf("%f", &a);
	fflush(stdin);	
	printf("Digite um numero: ");
	scanf("%f", &b);
	fflush(stdin);
	
	// processamento;
	potencia = pow(a, b);
	
	// saída;
	printf("\nResultado %.0f^%.0f = %.2f\n\n", a, b, potencia);

	system("pause");
	return 0;
}
