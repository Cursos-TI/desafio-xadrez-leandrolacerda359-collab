#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Função recursiva do Bispo
void movBispo(int numCasas) {
    if(numCasas > 0) {
        printf("^-> ");
        movBispo(numCasas - 1);
    }
}

//Função recursiva da Torre
void movTorre(int numCasas) {
    if(numCasas > 0) {
        printf("-> ");
        movTorre(numCasas - 1);
    }
}

//Função recursiva da Rainha
void movRainha(int numCasas) {
    if(numCasas > 0) {
        printf("<- ");
        movRainha(numCasas - 1);
    }
}


//Função Principal
int main() {

    //Variáveis
    const int numCasasBispo = 5; //Total de casas do movimento do Bispo
    const int numCasasTorre = 5; //Total de casas do movimento da Torre
    const int numCasasRainha = 8; //Total de casas do movimento da Rainha
    int i=0, j=0; //Contadores dos loopings

    //Output
    printf("Movimentações das peças de Xadrez:\n\n");

    //Movimentação do Bispo
    printf("Movimento do BISPO: ");
    for(int i=0;i<numCasasBispo;i++) {
        printf("^-> ");
    } printf("\n"); i=0;
    printf("Movimento do BISPO(RECURSIVIDADE!): "); movBispo(5); printf("\n\n");

    //Movimentação da Torre
    printf("Movimento da TORRE: ");
    while(i<numCasasTorre) {
        printf("-> ");
        i++;
    } printf("\n"); i=0;
    printf("Movimento da TORRE(RECURSIVIDADE!): "); movTorre(5); printf("\n\n");

    //Movimentação da Rainha
    printf("Movimento da RAINHA: ");
    do {
        printf("<- ");
        i++;
    } while(i<numCasasRainha); printf("\n");
    printf("Movimento da RAINHA(RECURSIVIDADE!): "); movRainha(8); printf("\n\n");

    //Movimentação do Cavalo
    printf("Movimento do CAVALO: ");
    for(i=0;i<=1;i++) {
        for(j=0;j<=2;j++) {
            printf("v");
            j++;
        }
        if(j=2) printf("<-");
        i++;
    } printf("\n"); i=0; j=0;
    printf("Movimento do CAVALO(MULTI-VARIÁVEIS): ");
    for(i=0,j=2;i<=1 && j>=0;i++,j--) {
        printf("v");
        if(j=0) printf("<-");
        i++; j--;
    } printf("\n\n");

    return 0;
}
