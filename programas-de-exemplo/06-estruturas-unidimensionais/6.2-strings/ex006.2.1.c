#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "");
	
	char nome[10];
	
	printf("\nScanf simples convencional\n");
	printf("Nome: ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Resultado: %s\n", nome);
	
	printf("\nScanf simples rebuscado\n");
	printf("Nome: ");
	scanf("%9[^\n]s", nome);
	fflush(stdin);
	
	printf("Resultado: %s", nome);
	
	return 0;
}

