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
	
	printf("\n----- Inserir Dados -----\n");
	for(int i=0; i<LISTA; i++) {
		printf("\nNome: ");
		gets(p[i].nome);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &p[i].idade);
		fflush(stdin);
		
		printf("Peso: ");
		scanf("%f", &p[i].peso);
		fflush(stdin);
	}
	
	printf("\n----- Lista de Pessoas -----\n");
	for(int i=0; i<LISTA; i++) {
		printf("\nNome: %s\nIdade: %d\nPeso: %.2f\n", p[i].nome, p[i].idade, p[i].peso);
	}
	
	PAUSE;
	return 0;
}
