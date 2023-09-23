#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 255

int main(void) {
	setlocale(LC_ALL, "");
	
	char s[N];
	int i;
	
	printf("Digite um texto:\n");
	gets(s);
	i = strlen(s);
	printf("\nTamanho do texto: %d\n\n", i);
	
	printf("Impressão de posição a posição:\n");
	for(i=0; i<strlen(s);  i++) {
		printf("%c", s[i]);
	}
	
	return 0;
}
