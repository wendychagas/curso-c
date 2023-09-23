#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 02\n------------------\n"

/*
	2) Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela
	todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B.
	Suponha que o usuário respeite o enunciado e insira valores válidos para A e B.

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
