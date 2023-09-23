#include <stdio.h>

typedef struct Taxas{
	double parcelaComJuros;
	double totalComJuros;
	double juros;
} Taxas;

int main() {
    double valorServico;
    double taxaJuros[12];
    Taxas taxa[12];
    
    // entrada
    printf("Valor do servico R$");
    scanf("%lf", &valorServico);

    taxaJuros[0] = valorServico*3.14 / 100; 
    taxaJuros[1] = valorServico*4.99 / 100;
    taxaJuros[2] = valorServico*5.89 / 100;
    taxaJuros[3] = valorServico*6.79 / 100;
    taxaJuros[4] = valorServico*7.69 / 100;
    taxaJuros[5] = valorServico*8.59 / 100;
    taxaJuros[6] = valorServico*9.54 / 100;
    taxaJuros[7] = valorServico*10.44 / 100;
    taxaJuros[8] = valorServico*11.34 / 100;
    taxaJuros[9] = valorServico*12.24 / 100;
    taxaJuros[10] = valorServico*13.14 / 100;
    taxaJuros[11] = valorServico*14.04 / 100;
    
    // processamento;
    for(int i=0; i<12; i++) {
    	taxa[i].totalComJuros = valorServico+taxaJuros[i];
    	taxa[i].parcelaComJuros = taxa[i].totalComJuros;
	}
	
	taxa[1].parcelaComJuros /= 2;
	taxa[2].parcelaComJuros /= 3;
	taxa[3].parcelaComJuros /= 4;
	taxa[4].parcelaComJuros /= 5;
	taxa[5].parcelaComJuros /= 6;
	taxa[6].parcelaComJuros /= 7;
	taxa[7].parcelaComJuros /= 8;
	taxa[8].parcelaComJuros /= 9;
	taxa[9].parcelaComJuros /= 10;
	taxa[10].parcelaComJuros /= 11;
	taxa[11].parcelaComJuros /= 12;
	
	taxa[0].juros = taxa[0].totalComJuros - valorServico;
	taxa[1].juros = taxa[1].totalComJuros - valorServico;
	taxa[2].juros = taxa[2].totalComJuros - valorServico;
	taxa[3].juros = taxa[3].totalComJuros - valorServico;
	taxa[4].juros = taxa[4].totalComJuros - valorServico;
	taxa[5].juros = taxa[5].totalComJuros - valorServico;
	taxa[6].juros = taxa[6].totalComJuros - valorServico;
	taxa[7].juros = taxa[7].totalComJuros - valorServico;
	taxa[8].juros = taxa[8].totalComJuros - valorServico;
	taxa[9].juros = taxa[9].totalComJuros - valorServico;
	taxa[10].juros = taxa[10].totalComJuros - valorServico;
	taxa[11].juros = taxa[11].totalComJuros - valorServico;
    
    // saída;
    printf("\n");
    for(int i=0; i<12; i++) {
    	printf("Parcela: %ix \t R$%.2f \t R$%.2f \t Juros: R$%.2f\n", i+1, taxa[i].parcelaComJuros, taxa[i].totalComJuros, taxa[i].juros);
	}

    return 0;
}

