#include <stdio.h>
#include <string.h>
#include <locale.h>

#define anoAtual 2023
#define MAX_PESSOAS 3

typedef struct {
    char nome[50];
    char sobrenome[100];
    int anoNascimento;
    int mesNascimento;
    int diaNascimento;
    int idade;
} Pessoa;

int calcularIdade(int anoNascimento) {
    return anoAtual - anoNascimento;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    Pessoa pessoas[MAX_PESSOAS];

    printf("Cadastro de Pessoas:\n");

    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("\nPessoa %d:\n", i + 1);

        printf("Digite o nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Digite o sobrenome: ");
        scanf("%s", pessoas[i].sobrenome);

        //printf("Digite o dia de nascimento: ");
        //scanf("%d", &pessoas[i].diaNascimento);

        //printf("Digite o mês de nascimento: ");
        //scanf("%d", &pessoas[i].mesNascimento);

        printf("Digite o ano de nascimento: ");
        scanf("%d", &pessoas[i].anoNascimento);

        // processamento;
        pessoas[i].idade = calcularIdade(pessoas[i].anoNascimento);
    }

    // saída;
    printf("\nRelatório de Pessoas +18:\n");
    for (int i = 0; i < MAX_PESSOAS; i++) {
    	if(pessoas[i].idade > 18) {
    		printf("\n----------\nPessoa %d:\n", i + 1);
        	printf("Nome: %s %s\n", pessoas[i].nome, pessoas[i].sobrenome);
        	//printf("Data de Nascimento: %d/%d/%d\n", pessoas[i].diaNascimento, pessoas[i].mesNascimento, pessoas[i].anoNascimento);
        	printf("Idade: %d anos\n", pessoas[i].idade);
		}
        
    }

    return 0;
}

