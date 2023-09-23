#define ESTOQUE 3

typedef struct {
    int codigo;
    char nome[15];
    int quantidade;
} Produto;

void cadastrarProduto(Produto *arrayProdutos);

void exibirProdutos(Produto arrayProdutos);


