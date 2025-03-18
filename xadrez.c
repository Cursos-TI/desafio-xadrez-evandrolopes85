#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int bispoRecursivo(int index); // Cabeçalho da função recursiva
int torreRecursivo(int index); 
int rainhaRecursivo(int index);
int cavaloRecursivo(int index);
int cavaloLoopAvancado(int movimento_cavalo);

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;
    const int MOVIMENTO_CAVALO = 2;
    int index = 0;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo\n");
    while(index < MOVIMENTO_BISPO){
        printf("Cima");
        printf(",Direita\n");
        index++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimento do Torre\n");
    for(int index = 0; index < MOVIMENTO_TORRE; index++){
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimento do Rainha\n");
    index = 0;
    do{
        printf("Esquerda\n");
        index++;
    }while(index < MOVIMENTO_RAINHA);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo\n");
    index = 1;
    while(index--){
        for(int i = MOVIMENTO_CAVALO; i > 0 ; i--){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\nMovimento do Bispo com recursividade\n");
    bispoRecursivo(MOVIMENTO_BISPO);

    printf("\nMovimento da Torre com recursividade\n");
    torreRecursivo(MOVIMENTO_TORRE);

    printf("\nMovimento da Rainha com recursividade\n");
    rainhaRecursivo(MOVIMENTO_RAINHA);

    printf("\nMovimento da Cavalo com recursividade\n");
    cavaloRecursivo(MOVIMENTO_CAVALO);

    printf("\nMovimento da Cavalo com for avançado\n");
    cavaloLoopAvancado(MOVIMENTO_CAVALO);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

int bispoRecursivo(int index){
    if(index <= 0){
        return 0;
    }
    printf("Cima");
    printf(",Direita\n");
    bispoRecursivo(index -1);
}

int torreRecursivo(int index){
    if(index <= 0){
        return 0;
    }
    torreRecursivo(index -1);
    printf("Direita\n");
}

int rainhaRecursivo(int index){
    if(index <= 0){
        return 0;
    }
    printf("Esquerda\n");
    rainhaRecursivo(index -1);
}

int cavaloRecursivo(int index){
    if(index <= 0){
        printf("Esquerda\n");
        return 0;
    }
    printf("Baixo\n");
    cavaloRecursivo(index -1);
}

int cavaloLoopAvancado(int movimento_cavalo){
    for(int linha = 0, coluna = movimento_cavalo; linha <= movimento_cavalo; linha++, coluna--){
        printf("Cima\n");
        if(linha == coluna){
            printf("Direita\n");
            break;
        }
    }
}

