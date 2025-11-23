#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função responsável pela movimentação do bispo
// Mapeameto para sentidoVertical e sentidoHorizontal
// Sentido Vertical: -1 para voltar casas e 1 para seguir em frente
// Sentido Horizontal: -1 para esquerda e 1 para movimentar se a direita
void moverBispo (int quantidadeCasas, int sentidoVertical ,int sentidoHorizontal) {
    if (quantidadeCasas <= 5) {
        if ((sentidoHorizontal == -1 || sentidoHorizontal == 1 ) &&
            (sentidoVertical == -1 || sentidoVertical == 1)) {

            for (int contador = 0;contador < quantidadeCasas ; contador++) {
                printf("Sentido Vertical:%s\nSentido Horozontal:%s", (sentidoVertical == 1)?"Frente" : "Tráz", (sentidoHorizontal == 1) ? "Direita" : "Esquerda");
            }

        }else {
            printf("Jogada Inválida!");
        }
        
    }else {
        printf("Movimento invalido!\nQuantidade de casas excedidas");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
