#include <stdio.h>
#include <locale.h>

#define TITULO "\n------------------\n   EXERCICIO 3\n------------------\n"
#define TXT2 "------------------\n      Saída      \n------------------\n"
#define TXT3 "\n------------------\n\n"
#define BIM 4

/*
	2) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba quatro notas,
	calcule e mostre a média aritmética entre elas.

*/

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome[50] = "";
	float n1, n2, n3, n4, media;
	
	printf(TITULO);
	
	// entradas;
	printf("Aluno(a): ");
	scanf("%s", nome);
	fflush(stdin);
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Nota 2: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Nota 3: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	printf("Nota 4: ");
	scanf("%f", &n4);
	fflush(stdin);
	
	// processamento;
	media = (n1+n2+n3+n4)/BIM;
	
	// saída;
	system("cls");
	printf(TXT2);
	printf("Nome: %s\n", nome);
	printf("Média: %.2f", media);
	printf(TXT3);
	
	system("Pause");
	return 0;
}
