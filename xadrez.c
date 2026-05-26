#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torreMovimento = 1, bispoMovimento = 1, rainhaMovimento = 1, cavaloMovimento;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    //Loop de repetição da movimentação do bispo, 5 casas na diagonal usando estrutura while
    while (bispoMovimento <= 5) {
        printf("Bispo andou %d casa(s) para:\n", bispoMovimento);
        printf("Cima, Direita\n");
        bispoMovimento++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //Loop de repetição da movimentação da torre, de 5 movimentos para Direita usando estrutura for
    for (torreMovimento; torreMovimento <= 5; torreMovimento++) {
        printf("Torre andou %d casa(s) para:\n", torreMovimento);
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //Loop de repetição da movimentação da rainha, 5 casas para Esquerda usando estrutura do-while
    do {
        printf("Rainha andou %d casa(s) para:\n", rainhaMovimento);
        printf("Esquerda\n");
        rainhaMovimento++;
    } while (rainhaMovimento <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Utilização do loop do-While aninhado com o for, para realizar o movimento de casas correspondente
 
    do {    //cavalo foi inicializado com o valor 1, quando a condição do loop zera, ele termina, nesse caso foi implementando a logica de negação, pro valor ficar falso

        for (int i = 1; i <= 2; i++)   //estrutura de repetição com for para andar pra cima ou baixo
        {
            printf("Cavalo andou %d casa(s) para:\n", i);
            printf("Baixo\n");
        }

        printf("Cavalo andou 1 casa(s) para:\n");  //finalização do do-while pra terminar o movimento da peça
        printf("Esquerda\n");
        
    } while (!cavaloMovimento);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
