#include <stdio.h>

typedef struct Taxas {
    double parcelaComJuros;
    double totalComJuros;
    double juros;
} Taxas;

int main() {
    double valorServico;
    double taxaJuros[] = {3.14, 4.99, 5.89, 6.79, 7.69, 8.59, 9.54, 10.44, 11.34, 12.24, 13.14, 14.04};
    Taxas taxa[12];

    // Entrada
    printf("Valor do serviço R$");
    scanf("%lf", &valorServico);

    // Processamento
    for (int i = 0; i < 12; i++) {
        double taxaPorcentagem = taxaJuros[i] / 100.0;
        taxa[i].totalComJuros = valorServico * (1 + taxaPorcentagem);
        taxa[i].parcelaComJuros = taxa[i].totalComJuros / (i + 1);
        taxa[i].juros = taxa[i].totalComJuros - valorServico;
    }

    // Saída
    printf("\n");
    for (int i = 0; i < 12; i++) {
        printf("Parcela: %ix \t R$%.2f \t R$%.2f \t Juros: R$%.2f\n",
               i + 1, taxa[i].parcelaComJuros, taxa[i].totalComJuros, taxa[i].juros);
    }

    return 0;
}

