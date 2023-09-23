#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 06\n------------------\n"

/*
	6) (Adaptado de ASCENCIO e CAMPOS, 2008) Um funcionário de uma empresa recebe
	aumento salarial anualmente. Sabe-se que:
	
		a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
		b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
		c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
		da porcentagem do ano anterior.
		
	Faça um programa que receba o ano atual determine o salário atual desse funcionário.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	double sal, sal_novo, porc;
	int i, ano_atual;
	
	// Entrada;
	printf("Qual é o ano atual?\n");
	scanf("%d", &ano_atual);
	
	// Processamento;
	sal = 1000.0;
	porc = 1.5/100.0;
	
	sal_novo = sal + sal*porc;
	for(i=2017;i<=ano_atual;i++) {
		porc = 2 * porc;
		sal_novo = sal_novo + sal_novo*porc;
	}
	
	// Saída;
	printf("\nSalário inicial era: R$%.2f\nO salário atual é: R$%.2f.\n", sal, sal_novo);
	
	system("pause");
	return 0;
}


