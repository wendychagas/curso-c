#include <stdio.h>

#define TITULO "\n------------------\n   EXERCICIO 1\n------------------\n"

/*
	1) (Adaptado de ASCENCIO e CAMPOS, 2008) - Fa�a um programa que receba quatro
	n�meros inteiros, calcule e mostre a soma desses n�meros.

*/

int main() {
	
	int n1, n2, n3, n4, soma;
	
	// entrada;
	printf(TITULO);
	printf("Primeiro valor: ");
	scanf("%i", &n1);
	printf("Segundo valor:  ");
	scanf("%i", &n2);
	printf("Terceiro valor: ");
	scanf("%i", &n3);
	printf("Quarto valor:   ");
	scanf("%i", &n4);
	
	
	// processamento;
	soma = n1+n2+n3+n4;
	
	// sa�da;
	printf("------------------\nResultado   =   %i\n", soma);
	
	system("pause");
	
	return 0;
}
