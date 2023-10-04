#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define PAUSE system("pause");
#define TAM 50
#define LISTA 3

struct Pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct Pessoa Pessoa;

int main(void) {
	setlocale(LC_ALL, "");
	
	Pessoa p[LISTA];
	
	p[0].idade = 10;
	p[0].peso = 30.0;
	strcpy(p[0].nome, "João");
	
	p[1].idade = 20;
	p[1].peso = 50.0;
	strcpy(p[1].nome, "Maria");
	
	p[2].idade = 30;
	p[2].peso = 70.0;
	strcpy(p[2].nome, "Bruxa");
	
	printf("Nome: %s\n", p[0].nome);
	printf("Idade: %d\n", p[0].idade);
	printf("Peso: %.2f\n", p[0].peso);
	printf("\n");

	printf("Nome: %s\n", p[1].nome);
	printf("Idade: %d\n", p[1].idade);
	printf("Peso: %.2f\n", p[1].peso);
	printf("\n");
	
	printf("Nome: %s\n", p[2].nome);
	printf("Idade: %d\n", p[2].idade);
	printf("Peso: %.2f\n", p[2].peso);
	printf("\n");
	
	PAUSE;
	return 0;
}
