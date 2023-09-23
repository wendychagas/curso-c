#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node {
	int date;
	struct Node *next;
} Node;

void insert(Node *p, int x) {
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->date = x;
	newNode->next = p->next;
	p->next = newNode;
}

void printList(Node *head) {
	Node *p;
	system("cls");
	printf("\nElementos da Lista\n");
	for(p=head->next;p!=NULL; p=p->next) {
		printf("%d ", p->date);
	}
}

void showMenu() {
	printf("\n----- Opções -----\n");
	printf("1. Inserir\n");
	printf("2. Mostrar\n");
	printf("0. Sair\n");
	printf("------------------\n");
	printf(">> ");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Node *list = NULL;
	list = (Node *) malloc(sizeof(Node));
	int op, value;
	
	do {
		showMenu();
		scanf("%d", &op);
		
		switch(op) {
		case 0:
			printf("\nFim do Programa.\n");
			break;
		case 1:
			printf("\nElemento: ");
			scanf("%d", &value);
			insert(list, value);
			system("cls");
			break;
		case 2:
			printList(list);
			break;
		default:
			printf("\nOpção inválida.\n");
		}
		
	} while(op != 0);
	
	
	system("pause");
	return 0;
}
