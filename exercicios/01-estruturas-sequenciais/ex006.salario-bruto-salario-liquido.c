#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 6\n------------------\n"

/*

	6) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário-base	
	de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário
	tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.

*/

int main() {
	
	char nome[50];
	float salarioBase, gratificacao, imposto, salarioLiquido;
	
	// entrada;
	printf(TITULO);
	printf("\nNome: ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("Salario Bruto R$");
	scanf("%f", &salarioBase);
	fflush(stdin);
	
	// processamento;
	gratificacao = salarioBase * 5/100;
	imposto = salarioBase * 7/100;
	salarioLiquido = salarioBase+gratificacao-imposto;
	
	// saída;
	printf("\nNome:           %s\n", nome);
	printf("Salario Bruto   R$%.2f\n", salarioBase);
	printf("Imposto         R$%.2f\n", imposto);
	printf("Graticacao      R$%.2f\n", gratificacao);
	printf("Salario Liquido R$%.2f\n\n", salarioLiquido);
	
	system("pause");
	return 0;
}

