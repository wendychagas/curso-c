#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 10\n------------------\n"

/*
	(Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba tr�s n�meros
	obrigatoriamente em ordem crescente e um quarto n�mero que n�o siga esta regra.
	Mostre, em seguida, os quatro n�meros em ordem n�o-crescente.

*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, num4;

	printf(TITULO);
	
	// entrada;
	printf("Primeiro n�mero: ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("Segundo n�mero: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	printf("Terceiro n�mero: ");
	scanf("%d", &num3);
	fflush(stdin);
	
	printf("Quarto n�mero: ");
	scanf("%d", &num4);
	fflush(stdin);
	
	// processamento e sa�da;
	if (num4 > num3) {
		printf("%d - %d - %d - %d\n", num4, num3, num2, num1);
	}
	if ((num4 > num2) && (num4 <= num3)) {
		printf("%d - %d - %d - %d\n", num3, num4, num2, num1);
	}
	if ((num4 > num1) && (num4 <= num2)) {
		printf("%d - %d - %d - %d\n", num3, num2, num4, num1);
	}
	if (num4 <= num1) {
		printf("%d - %d - %d - %d\n", num3, num2, num1, num4);
	}
	
	system("pause");
	return 0;
}
