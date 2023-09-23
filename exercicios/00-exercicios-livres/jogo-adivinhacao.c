#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    printf("=====================\n");
    printf("Jogo de Adivinhação\n");
    printf("=====================\n");
    
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    double pontos = 1000;
    int numerosecreto = numerogrande % 100;
    int tentativa = 1;
    int chute;
    
    while(1) {
        printf("Tentativa %d\n", tentativa);
        printf("\nQual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0) {
            printf("Chute não pode ser um número negativo.\n");
            continue;
        }
        
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        
        if(acertou) {
            printf("Parabéns você acertou!\n");
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto.\n");
        } else {
            printf("Seu chute foi menor do que o número secreto.\n");
        }
        tentativa++;
        
        double pontosperdidos = abs(chute - numerosecreto)/(double)2;
		pontos-=pontosperdidos;
        
    }
    
    
    printf("\nFim do Jogo.\n");
    printf("Você acertou em %d tentativas.\n", tentativa);
    printf("Pontuação: %.1f\n", pontos);
}

