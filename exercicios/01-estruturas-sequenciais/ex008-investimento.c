#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 8\n------------------\n"

/*
	8) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o valor de um
	depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor
	total depois do rendimento

*/

int main() {
	
	float valorDeposito, taxa, rendimento, valor;
	
	// entrada;
	printf(TITULO);
	printf("\nDepositar R$");
	scanf("%f", &valorDeposito);
	fflush(stdin);
	
	printf("Taxa: ");
	scanf("%f", &taxa);
	fflush(stdin);
	
	// processamento;
	rendimento = valorDeposito*taxa/100;
	valor = valorDeposito+rendimento;
	
	// saída;
	printf(TITULO);
	system("cls");
	printf("\nDepositou:   R$%.2f\n", valorDeposito);
	printf("Lucro:       R$%.2f\n", rendimento);
	printf("Saldo atual: R$%.2f\n", valor);

	system("pause");
	return 0;
}
