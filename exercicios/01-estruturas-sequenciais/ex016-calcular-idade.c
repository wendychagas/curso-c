#include <stdio.h>
#include <string.h>

#define TITULO "\n------------------\n   EXERCICIO 15\n------------------\n"

/*
	16) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o ano de
	nascimento de uma pessoa e ano atual, calcule e mostre:
		a) a idade dessa pessoa;
		b) quantos anos essa pessoa ter� em 2030;

*/

int main() {
	
	int nasc, atual;
	printf(TITULO);
	
	// entrada;
	printf("\nInsira o ano de nascimento: ");
	scanf("%d", &nasc);
	printf("Insira o ano atual: ");
	scanf("%d", &atual);
	
	// sa�da;
	printf("\nIdade atual: %d\n", atual-nasc);
	printf("Idade em 2030: %d\n\n", 2030-nasc);

	system("pause");
	return 0;
}


