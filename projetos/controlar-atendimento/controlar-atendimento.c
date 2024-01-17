#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define PAUSE system("pause")
#define CLS system("cls")

typedef struct Atendimento {
	char nome[50];
	char cpf[14];
	int tipoAtendimento;
}Atendimento;

int totalAtendimentos = 0;

void cadastrarAtendimento(Atendimento atendimentos[]);
void listarAtendimentosRegistrados(Atendimento atendimentos[]);
void listarAtendimentosPorSetor(Atendimento atendimentos[], int setorDesejado);

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	void showMenu();
	
	Atendimento atendimentos[1];
	int op;
	
	do {		
		showMenu();
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op) {
		case 1:
			cadastrarAtendimento(atendimentos);
			PAUSE; CLS;
			break;
		case 2:
			listarAtendimentosRegistrados(atendimentos);
			PAUSE; CLS;
			break;
		case 3:
			printf("\n1 - Abertura de Conta\n");
            printf("2 - Caixa\n");
            printf("3 - Gerente Pessoa Física\n");
            printf("4 - Gerente Pessoa Jurídica\n");
            printf("Escolha o tipo de atendimento (1/2/3/4): ");
            int setorDesejado;
            scanf("%d", &setorDesejado);
            listarAtendimentosPorSetor(atendimentos, setorDesejado);
            PAUSE; CLS;
			break;
		case 4:
			CLS;
			printf("======================================\n");
			printf("\tSaindo do Sistema\n");
			printf("======================================\n");
			break;
		default:
			printf("\nOpção inválida. Tente novamente\n\n");
			PAUSE; CLS;
		}
		
	} while(op!=4);
	
	PAUSE;
	return 0;
}

void showMenu() {
	printf("\nBem Vindo ao Sistema de Atendimento\n\n");
	printf("1. Solicitar Atendimento\n");
	printf("2. Listar Atendimentos Registrados\n");
	printf("3. Listar Atendimentos por Setor\n");
	printf("4. Sair\n");
	printf("\n: ");
}

void cadastrarAtendimento(Atendimento atendimentos[]) {
	Atendimento novoAtendimento;
	printf("\nNome: ");
	fgets(novoAtendimento.nome, 50, stdin);
	fflush(stdin);
	
	printf("CPF: ");
	fgets(novoAtendimento.cpf, 14, stdin);
	fflush(stdin);
	
	printf("\n1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    printf("Escolha o tipo de atendimento (1/2/3/4): ");
    scanf("%d", &novoAtendimento.tipoAtendimento);
	fflush(stdin);
	
	atendimentos[totalAtendimentos] = novoAtendimento;
    totalAtendimentos++;

    printf("\nAtendimento registrado com sucesso!\n");
}

void listarAtendimentosRegistrados(Atendimento atendimentos[]) {
	int encontrouAtendimentos = 0;
    for (int i=0; i<totalAtendimentos; i++) {
	    printf("========================================\n");
	    printf("Nome: %s", atendimentos[i].nome);
	    printf("CPF: %s\n", atendimentos[i].cpf);
	    printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);
	    switch (atendimentos[i].tipoAtendimento) {
	    case 1:
	        printf("Abertura de Conta\n");
	        break;
	    case 2:
	        printf("Caixa\n");
	        break;
	    case 3:
	        printf("Gerente Pessoa Física\n");
	        break;
	    case 4:
	        printf("Gerente Pessoa Jurídica\n");
	        break;
	    default:
	        printf("Desconhecido\n");
	        break;
	    }
	    printf("========================================\n");
	    encontrouAtendimentos = 1;
	}
	if (!encontrouAtendimentos) {
		printf("\nVazio.\n");
		PAUSE; CLS;
	}
}

void listarAtendimentosPorSetor(Atendimento atendimentos[], int setorDesejado) {
	int encontrouAtendimentos = 0;
    for (int i = 0; i < totalAtendimentos; i++) {
    	if (atendimentos[i].tipoAtendimento == setorDesejado) {
	        printf("========================================\n");
	    	printf("Nome: %s", atendimentos[i].nome);
	    	printf("CPF: %s\n", atendimentos[i].cpf);
	    	printf("Tipo Atendimento - %d - ", atendimentos[i].tipoAtendimento);
	    	switch (atendimentos[i].tipoAtendimento) {
		    case 1:
		        printf("Abertura de Conta\n");
		        break;
		    case 2:
		        printf("Caixa\n");
		        break;
		    case 3:
		        printf("Gerente Pessoa Física\n");
		        break;
		    case 4:
		        printf("Gerente Pessoa Jurídica\n");
		        break;
		    default:
		        printf("Desconhecido\n");
		        break;
		    }
			printf("========================================\n");
			encontrouAtendimentos = 1;
        }
    }
    if (!encontrouAtendimentos) {
		printf("\nVazio.\n");
		PAUSE; CLS;
	}
}

