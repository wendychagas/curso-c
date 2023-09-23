#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 12\n------------------\n"

/*
	12) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba quatro
	valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos.
	Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado
	para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
	
	Valor de I 			Forma de escrever
		1 			A, B e C em ordem crescente
		2 			A, B e C em ordem decrescente
		3 			O maior fica entre os outros dois números


*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int i;
	float a, b, c;
	
	// entrada;
	printf("\nPrimeiro número: ");
	scanf("%f", &a);
	
	printf("Segundo número: ");
	scanf("%f", &b);
	
	printf("Terceiro número: ");
	scanf("%f", &c);
	
	printf("\n----- Opções -----\n");
	printf("1. Crescente\n");
	printf("2. Decrescente\n");
	printf("3. Maior no meio\n");
	printf("0. Sair\n");
	printf("------------------\n");
	printf("> ");
	scanf("%d", &i);
	
	// processamento e saída;
	switch(i) {
	case 0:
		break;
	case 1:
		// ordem crescente;
		if ((a < b) && (a < c)) {
			if (b < c) {
				printf("\n%.1f - %.1f - %.1f\n", a, b, c);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", a, c, b);
			}
		}
		if ((b < a) && (b < c)) {
			if (a < c) {
				printf("\n%.1f - %.1f - %.1f\n", b, a, c);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", b, c, a);
			}
		}
		if ((c < a) && (c < b)) {
			if (a < b) {
				printf("\n%.1f - %.1f - %.1f\n", c, a, b);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", a, c, b);
			}
		}
		break;
	case 2:
		if ((a > b) && (a > c)) {
			if (b > c) {
				printf("\n%.1f - %.1f - %.1f\n", a, b, c);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", a, c, b);
			}
		}
		if ((b > a) && (b > c)) {
			if (a > c) {
				printf("\n%.1f - %.1f - %.1f\n", b, a, c);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", b, c, a);
			}
		}
		if ((c > a) && (a > c)) {
			if (a > b) {
				printf("\n%.1f - %.1f - %.1f\n", c, a, b);
			} else {
				printf("\n%.1f - %.1f - %.1f\n", c, b, a);
			}
		}
		break;
	case 3:
		if ((a > b) && (a > c)) {
			printf("\n%.1f - %.1f - %.1f\n", b, a, c);
		}
		if ((b > a) && (b > c)) {
			printf("\n%.1f - %.1f - %.1f\n", a, b, c);
		}
		if ((c > a) && (c > b)) {
			printf("\n%.1f - %.1f - %.1f\n", a, c, b);
		}
		break;
	default:
		printf("\nOpção inválida.\n");
	}
	
	system("pause");
	return 0;
}
