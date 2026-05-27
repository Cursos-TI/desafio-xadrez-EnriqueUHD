#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//implementando funções recurssivas pra realizar o loop de cada peça
void moverTorre(int casas){
    if(casas > 0) {
    moverTorre(casas - 1);
    printf("Torre andou para:\n");
    printf("Direita\n");
    }
}

void moverBispo(int casas){
    if(casas > 0) {
    moverBispo(casas - 1);
    printf("Bispo andou para:\n");
    printf("Cima, Direita\n"); 
    }
}

void moverRainha(int casas){
    if(casas > 0) {
    moverRainha(casas - 1);
    printf("Rainha andou para:\n");
    printf("Esquerda\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    //Chamando cada função com seus parametros

    moverTorre(5);
    
    moverBispo(5);
    
    moverRainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Utilização do loop do-While aninhado com o for, para realizar o movimento de casas correspondente
 
    //Refatorado para diminuir o custo de processamento em um unico loop com condicional 

    for (int i = 2, j = 1; i > 0 || j > 0; i--)  //Enquanto qualquer um dos dois valores for maior q zero, o loop continua
    {   
    if (i > 0)
        {
        printf("Cavalo andou para:\n");
        printf("Baixo\n");
        }
    else if (j > 0)
        {
        printf("Cavalo andou para:\n");
        printf("Esquerda\n");
        j--;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
