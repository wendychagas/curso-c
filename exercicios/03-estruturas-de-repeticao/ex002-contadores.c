#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 02\n------------------\n"

/*
	2) Desenvolva um algoritmo que receba dois n�meros inteiros positivos A e B. Exiba na tela
	todos os n�meros inteiros compreendidos entre A e B, excluindo os pr�prios A e B.
	Suponha que o usu�rio respeite o enunciado e insira valores v�lidos para A e B.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int inicial, final;
	
	// entrada;
	printf("Digite o valor A: ");
	scanf("%d", &inicial);
	
	printf("Digite o valor B: ");
	scanf("%d", &final);
	
	// processamento;
	for(int i = inicial+1; i < final; i++) {
		printf("%d ", i);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
