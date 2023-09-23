#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 255

int main(void) {
	setlocale(LC_ALL, "");
	
	char origem[N] = {"Olá Mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("\n");
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
	return 0;
}

