#include <stdio.h>
#include <string.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO 13\n------------------\n"

/*
	13) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba um n�mero
	positivo e maior que zero, calcule e mostre:
		a) o n�mero digitado ao quadrado;
		b) o n�mero digitado ao cubo;
		c) a raiz quadrada do n�mero digitado;
		d) a raiz c�bica do n�mero digitado.

*/

int main() {
	
	float numero, quadrado, cubo, raizQuadrada, raizCubica;
	printf(TITULO);
	
	// entrada;
	printf("\nDigite um numero: ");
	scanf("%f", &numero);
	fflush(stdin);
	
	// processamento;
	quadrado = pow(numero, 2);
	cubo = pow(numero, 3);
	raizQuadrada = sqrt(numero);
	raizCubica = pow(numero, 1.0/3.0);
	
	// sa�da;
	system("cls");
	printf(TITULO);
	
	printf("\nQuadrado: %.2f\n", quadrado);
 	printf("Cubo: %.2f\n", cubo);
 	printf("Raiz quadrada: %.2f\n", raizQuadrada);
 	printf("Raiz cubica: %.2f\n\n", raizCubica);
	
	system("pause");
	return 0;
}
