#include <stdio.h>
#include <locale.h>

typedef struct Data {
	int dia, mes, ano;
} Data;

typedef struct Pessoa {
	Data dtNascimento;
	char nome[100];
	char genero;
} Pessoa;

Pessoa cadastrarPessoa() {
	Pessoa p;
	printf("Nome: ");
	scanf("%99[^\n]s", p.nome);
	fflush(stdin);
	
	printf("Genero: ");
	scanf("%c", &p.genero);
	fflush(stdin);
	
	printf("Aniversário DD/MM/AAAA\n> ");
	scanf("%d %d %d", &p.dtNascimento.dia, &p.dtNascimento.mes, &p.dtNascimento.ano);
	fflush(stdin);
	return p;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa p[3];
	
	for(int i=0; i<3; i++) {
		p[i] = cadastrarPessoa();
		printf("\n");
	}
	
	
	printf("\n");
	for(int i=0; i<3; i++) {
		printf("Nome:\t%s\n", p[i].nome);
		printf("Genero:\t%c\n", p[i].genero);
		printf("Nascimento: %d-%d-%d\n\n", p[i].dtNascimento.dia, p[i].dtNascimento.mes, p[i].dtNascimento.ano);
	}
	
	system("pause");
	return 0;
}

