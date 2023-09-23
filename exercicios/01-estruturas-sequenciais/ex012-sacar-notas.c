#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 12\n------------------\n"

/*
	12) Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor
	total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50,
	20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba
	o menor número de notas possível. 	

*/

int main() {
	
	int valorSacado, saque, notaCem, notaCinq, notaVinte, notaDez, notaCinco, notaDois, moedaUm;
	
	printf(TITULO);
	
	// entrada;
	printf("\nSacar R$");
	scanf("%i", &saque);
	fflush(stdin);
	valorSacado = saque;
	
	// processamento;
	notaCem = saque/100;
	saque = saque%100;
	notaCinq = saque/50;
	saque = saque%50;
	notaVinte = saque/20;
	saque = saque%20;
	notaDez = saque/10;
	saque = saque%10;
	notaCinco = saque/5;
	saque = saque%5;
	notaDois = saque/2;
	saque = saque%2;
	moedaUm = saque/1;
	saque = saque%1;	
	
	// saída; 
	system("cls");
	printf(TITULO);
	printf("\nSacando  R$%i\n", valorSacado);
	printf("\nNotas de R$100,00:   x%i\n", notaCem);
	printf("Notas de R$50,00:    x%i\n", notaCinq);
	printf("Notas de R$20,00:    x%i\n", notaVinte);
	printf("Notas de R$10,00:    x%i\n", notaDez);
	printf("Notas de R$5,00:     x%i\n", notaCinco);
	printf("Notas de R$2,00:     x%i\n", notaDois);
	printf("Moeda de R$1,00:     x%i\n\n", moedaUm);
	
	system("pause");
	
	return 0;
}
