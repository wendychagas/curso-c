#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 7\n------------------\n"

/*

	7) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário-base
	de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse
	funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.

*/

int main() {
	
	float salarioBruto, valorImposto, salarioLiquido;
	float gratificacao = 600;
	char nome[50];
	
	// entrada;
	printf(TITULO);
	
	printf("\nNome: ");
	scanf("%49[^\n]s", nome);
	fflush(stdin);
	
	printf("Salario Bruto R$");
	scanf("%f", &salarioBruto);
	fflush(stdin);
	
	// processamento;
	valorImposto = salarioBruto * 10/100;
	salarioBruto -= valorImposto;
	salarioLiquido = salarioBruto+gratificacao;
	
	// saída;
	system("cls");
	printf("\nNome:             %s\n", nome);
	//printf("Salario bruto:  R$%2.f\n", salarioBruto);
	printf("Imposto:         -R$%.2f\n", valorImposto);
	printf("Gratificacao:    +R$%.2f\n", gratificacao);
	printf("Salario liquido: =R$%.2f\n\n", salarioLiquido);
	system("pause");
	
	return 0;
	
}
