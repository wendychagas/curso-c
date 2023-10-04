#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO \n------------------\n"

/*
		8) Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o 
	algoritmo deve mostrar cálculo o primeiro número elevado ao segundo. Ao final, o 
	algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira 
	o caractere "s", o algoritmo solicita novamente dois números e mostra novamente a 
	potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado.

*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf(TITULO);
	
	double a, b, r;
	char op;
	
	// entrada;
	printf("\nBase: ");
	scanf("%f", &a);
	//fflush(stdin);
	
	printf("\nExpoente: ");
	scanf("%f", &b);
	//fflush(stdin);
	
	// processamento;
	r = pow(a, b);
	
	// saída;
	printf("\nSaída: %.0f ^ %.0f = %.2f\n", a, b, r);
	
	system("pause");
	return 0;
}
