#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "head.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    Produto arrayProdutos[ESTOQUE];
    int produto;
    
    for(produto = 0; produto < ESTOQUE; produto++) {
    	printf("\n---------------\n Produto %i\n---------------\n", produto+1);
        cadastrarProduto(&arrayProdutos[produto]); // Passar o endere�o do elemento para a fun��o
        system("cls");
    }
    
    printf("\n");
	system("pause");
    
	for(produto = 0; produto < ESTOQUE; produto++) {
		printf("\n---------------\n Produto %i\n---------------\n", produto+1);
        exibirProdutos(arrayProdutos[produto]);
    }
    
    printf("\n");
	system("pause");
        
    return 0;
}
