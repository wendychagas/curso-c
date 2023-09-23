#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TITULO "\n------------------\n   EXERCICIO 09\n------------------\n"

/*
	(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números
	distintos e mostre-os em ordem crescente.
*/

int main() {

	int n1, n2, n3;
	int maior = 0;
	int menor = 0;
	int medio = 0;
	
	printf(TITULO);
	
	// entrada;
	printf("Primeiro valor: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Segundo valor:  ");
	scanf("%i", &n2);
	fflush(stdin);
	
	printf("Terceiro valor: ");
	scanf("%i", &n3);
	fflush(stdin);
		
	// processamento;
	if((n1 > n2) && (n1 > n3)) {
		maior = n1;
		if(n2 > n3) {
			medio = n2;
			menor = n3;
		} else {
			medio = n3;
			menor = n2;
		}
	} else if((n2 > n1) && (n2 > n3)) {
		maior = n2;
		if(n1 > n3) {
			medio = n1;
			menor = n3;
		} else {
			medio = n3;
			menor = n1;
		}
	} else if((n3 > n2) && (n3 > n1)){
		maior = n3;
		if(n1 > n2) {
			medio = n1;
			menor = n2;
		} else {
			medio = n2;
			menor = n1;
		}
	}
	
	// saída;
	printf("%i - %i - %i\n", menor, medio, maior);
	
	system("pause");
	return 0;
}

