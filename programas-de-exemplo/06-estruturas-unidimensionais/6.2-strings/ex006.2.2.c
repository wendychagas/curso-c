#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "");
	
	char nome[10];
	
	printf("\nGets\n");
	printf("Nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("Resultado: %s\n", nome);
	
	printf("\nFgets\n");
	printf("Nome: ");
	fgets(nome, 10, stdin);
	fflush(stdin);
	
	puts(nome);
	
	return 0;
}

