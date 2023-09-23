#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 10\n------------------\n"

/*
	(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números
	obrigatoriamente em ordem crescente e um quarto número que não siga esta regra.
	Mostre, em seguida, os quatro números em ordem não-crescente.

*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, num4;

	printf(TITULO);
	
	// entrada;
	printf("Primeiro número: ");
	scanf("%d", &num1);
	fflush(stdin);
	
	printf("Segundo número: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	printf("Terceiro número: ");
	scanf("%d", &num3);
	fflush(stdin);
	
	printf("Quarto número: ");
	scanf("%d", &num4);
	fflush(stdin);
	
	// processamento e saída;
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
