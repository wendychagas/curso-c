#include <stdio.h>

#define TITULO "\n------------------\n   EXERCICIO 1\n------------------\n"

/*
	1) (Adaptado de ASCENCIO e CAMPOS, 2008) - Faça um programa que receba quatro
	números inteiros, calcule e mostre a soma desses números.

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
	
	// saída;
	printf("------------------\nResultado   =   %i\n", soma);
	
	system("pause");
	
	return 0;
}
