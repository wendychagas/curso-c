#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 255

int main(void) {
	setlocale(LC_ALL, "");
	
	char s1[N] = {"Lógica de"};
	char s2[N] = {" Programação!"};
	
	printf("Antes do strcat:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1, s2);
	
	printf("\n");
	
	printf("Depois do strcat:\n");
	puts(s1);
	
	return 0;
}
