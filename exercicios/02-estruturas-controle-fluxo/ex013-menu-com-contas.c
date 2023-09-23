#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO 13\n------------------\n"

/*
	13) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que mostre o menu de
	op��es a seguir, receba a op��o do usu�rio e dos dados necess�rios para executar cada
	opera��o. Suponha que o usu�rio n�o ir� inserir valores inv�lidos.
	
	---------- Menu de op��es ----------
	1. Somar dois n�meros
	2. Raiz quadrada de um n�mero
	0. Sair
	------------------------------------
	> Digite a op��o desejada: 

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	int op;
	float v1, v2, r;
	
	// entrada;
	printf("\n---------- Op��es ----------\n");
	printf("1. Somar dois n�meros\n");
	printf("2. Raiz quadrada de um n�mero\n");
	printf("0. Sair\n");
	printf("----------------------------\n");
	printf("> Digite a op��o desejada: ");
	scanf("%d", &op);
	
	// processamento e sa�da;
	switch(op) {
	case 0:
		printf("\nFim do Programa\n");
		break;
	case 1:
		printf("\nValor 1: ");
		scanf("%f", &v1);
		
		printf("Valor 2: ");
		scanf("%f", &v2);
		r = v1+v2;
		printf("Resultado: %.2f + %.2f = %.2f\n", v1, v2, r);
		break;
	case 2:
		printf("\nValor: ");
		scanf("%f", &v1);
		r = sqrt(v1);
		printf("Resultado: Ra�z Quadrada de %.2f = %.2f\n", v1, r);
		break;
	default:
		printf("\nOp��o inv�lida.\n");
	}
	
	system("pause");
	return 0;
}
