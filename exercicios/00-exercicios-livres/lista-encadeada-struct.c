#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LIMPATELA system("cls")

typedef struct Data {
	int dia, mes, ano;
} Data;

typedef struct Pessoa {
	char nome[100];
	char sexo;
	Data dtNascimento;
} Pessoa;

typedef struct No {
	Pessoa p;
	struct No *proximo;
} No;

Pessoa cadastrar() {
	Pessoa p;
	
	fflush(stdin); // precisei limpar o lixo de memória no inicio;
	printf("\nNome: ");
	scanf("%99[^\n]s", p.nome);
	fflush(stdin);
	printf("Genero: ");
	scanf("%c", &p.sexo);
	fflush(stdin);
	
	printf("Nascimento: ");
	scanf("%d %d %d", &p.dtNascimento.dia, &p.dtNascimento.mes, &p.dtNascimento.ano);
	fflush(stdin);
	
	return p;
}

void showMenu() {
	printf("\n1. Inserir\n2. Mostrar\n0. Sair\n\nEscolha: ");
}

void inserir(No *ptr, Pessoa pessoa) {
	No *novo = (No *) malloc(sizeof(No));
	novo->p = pessoa;
	novo->proximo = ptr->proximo;
	ptr->proximo = novo;
	//return novo;
}

void mostrar(No *inicio) {
	No *ptr;
	LIMPATELA;
	printf("\n----- Cadastros -----\n\n");
	for(ptr=inicio->proximo; ptr!=NULL; ptr=ptr->proximo) {
		printf("Nome: %s\n", ptr->p.nome);
		printf("Genero: %c\n", ptr->p.sexo);
		printf("Nasc: %d-%d-%d\n\n", ptr->p.dtNascimento.dia, ptr->p.dtNascimento.mes, ptr->p.dtNascimento.ano);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	No *lista = (No *) malloc(sizeof(No));
	lista->proximo = NULL;
	
	Pessoa p;
	int op;
	
	do {
		showMenu();
		scanf("%d", &op);
		
		switch(op) {
		case 0:
			printf("\nFim do Programa\n");
			break;
		case 1:
			// inserir;
			inserir(lista, cadastrar());
			LIMPATELA;
			break;
		case 2:
			// mostrar;
			mostrar(lista);
			break;
		default:
			printf("\nOpção inválida.\n");
		}
		
	} while(op!=0);
	
	system("pause");
	return 0;
}
