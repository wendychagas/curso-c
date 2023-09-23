#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void cadastrarProduto(Produto *arrayProdutos) { // Adicionar '*' para receber o endere�o do elemento
    printf("\nNome: ");
    scanf("%49[^\n]", arrayProdutos->nome); // Remover o 's' depois de "%49[^\n]"
    fflush(stdin);
    
    printf("Codigo: ");
    scanf("%i", &arrayProdutos->codigo); // Passar o endere�o da vari�vel
    fflush(stdin);
    
    printf("Quantidade: ");
    scanf("%i", &arrayProdutos->quantidade); // Passar o endere�o da vari�vel
    fflush(stdin);        
}

void exibirProdutos(Produto arrayProdutos) {
    printf("\nNome: %s\n", arrayProdutos.nome);
    printf("Codigo: %i\n", arrayProdutos.codigo);
    printf("Quant.: %i\n", arrayProdutos.quantidade);
}
