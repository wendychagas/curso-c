#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 02\n------------------\n"

/*
	2) Desenvolva um algoritmo que receba tr�s n�meros. O algoritmo deve imprimir
	"Condi��o satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros
	dois (o primeiro n�o pode ser igual a nenhum). Caso contr�rio, deve ser impressa a
	mensagem: "Erro".
*/

int main() {

	int n1, n2, n3;
	printf(TITULO);
	
	// entrada;
	printf("\nInsira o primeiro numero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Insira o segundo numero:  ");
	scanf("%i", &n2);
	fflush(stdin);
	
	printf("Insira o terceiro numero: ");
	scanf("%i", &n3);
	fflush(stdin);
	
	
	// processamento e sa�da;
	if(n1 > n2 && n1 > n3) {
		printf("\nCondicao satisfeita.\n\n");
	} else {
		printf("\nErro!\n\n");
	}
	
	system("pause");
	return 0;
}
