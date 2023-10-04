#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define TITULO "\n------------------\n   EXERCICIO \n------------------\n"

/*
		8) Desenvolva um algoritmo que pe�a para o usu�rio informar dois n�meros. Ap�s isso, o 
	algoritmo deve mostrar c�lculo o primeiro n�mero elevado ao segundo. Ao final, o 
	algoritmo deve perguntar se o usu�rio deseja repetir a opera��o. Caso o usu�rio insira 
	o caractere "s", o algoritmo solicita novamente dois n�meros e mostra novamente a 
	pot�ncia do primeiro pelo segundo. Caso contr�rio, o algoritmo � encerrado.

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
	
	// sa�da;
	printf("\nSa�da: %.0f ^ %.0f = %.2f\n", a, b, r);
	
	system("pause");
	return 0;
}
