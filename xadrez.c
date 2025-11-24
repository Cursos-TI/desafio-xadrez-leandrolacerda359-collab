#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Variáveis
    const int numCasasBispo = 5; //Total de casas do movimento do Bispo
    const int numCasasTorre = 5; //Total de casas do movimento da Torre
    const int numCasasRainha = 8; //Total de casas do movimento da Rainha
    int j=0, k=0;

    //Output
    printf("Movimentações das peças de Xadrez:\n\n");

    //Movimentação do Bispo
    printf("Movimento do BISPO: ");
    for(int i=0;i<numCasasBispo;i++) {
        printf("^-> ");
    } printf("\n");

    //Movimentação da Torre
    printf("Movimento da TORRE: ");
    while(j<numCasasTorre) {
        printf("-> ");
        j++;
    } printf("\n");

    //Movimentação da Rainha
    printf("Movimento da RAINHA: ");
    do {
        printf("<- ");
        k++;
    } while(k<numCasasRainha); printf("\n");

    return 0;
}
