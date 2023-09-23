#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 255

int main(void) {
	setlocale(LC_ALL, "");
	
	char hardText[N] = {"/exit");
	char senhaUsr[N];
	int ok;
	
	printf("Digite um texto:\n");
	gets(senhaUsr);
	
	ok = strcmp(hardText, senhaUsr);
	
	if(ok == 0)
		printf("Textos iguais.\n");
	else
		printf("Textos diferentes.\n");
	
	return 0;
}
