#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct Pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct Pessoa Pessoa;

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa p1 = {0, 0.0, "Teste"};
	
	printf("Nome: %s\n", p1.nome);
	printf("Idade: %d\n", p1.idade);
	printf("Peso: %.2f\n", p1.peso);
	printf("\n");
	
	// atribuindo valores;
	strcpy(p1.nome, "Wendy");
	p1.idade = 29;
	p1.peso = 55.6;
	
	printf("Nome: %s\n", p1.nome);
	printf("Idade: %d\n", p1.idade);
	printf("Peso: %.2f\n", p1.peso);
	printf("\n");
	
	// solicitando inserções via teclado;
	printf("Nome: ");
	gets(p1.nome);
	fflush(stdin);
	
	printf("Idade: ");
	scanf("%d", &p1.idade);
	fflush(stdin);
	
	printf("Peso: ");
	scanf("%f", &p1.peso);
	fflush(stdin);
	
	printf("\nNome: %s\n", p1.nome);
	printf("Idade: %d\n", p1.idade);
	printf("Peso: %.2f\n", p1.peso);
	printf("\n");

	system("pause");
	return 0;
}
