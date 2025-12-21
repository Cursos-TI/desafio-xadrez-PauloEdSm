#include <stdio.h>
#include <stdlib.h>

/*
 BISPO — obrigatoriamente recursivo
 Movimento: 5 casas na diagonal superior direita
*/
void moveBispoRecursivo(int passos) {
    if (passos == 0) {
        printf("--- Bispo: movimento finalizado ---\n");
        return;
    }

    printf("Diagonal Superior Direita\n");
    moveBispoRecursivo(passos - 1);
}

/*
 TORRE — loop simples
 Movimento: 5 casas para a direita
*/
void moveTorre() {
    printf("\n--- Movimento da Torre ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("--- Torre: movimento finalizado ---\n");
}

/*
 RAINHA — loop simples
 Movimento: 8 casas para a esquerda
*/
void moveRainha() {
    printf("\n--- Movimento da Rainha ---\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }
    printf("--- Rainha: movimento finalizado ---\n");
}

/*
 CAVALO — loops aninhados + condição múltipla
 Movimento: 2 para cima e 1 para a direita
*/
void moveCavalo() {
    printf("\n--- Movimento do Cavalo ---\n");

    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {

            if (i + j != 3)
                continue;

            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }

    printf("--- Cavalo: movimento finalizado ---\n");
}

int main() {
    int opcao;

    do {
        printf("\n============================\n");
        printf("   DESAFIO XADREZ - MESTRE   \n");
        printf("============================\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                moveBispoRecursivo(5);
                break;
            case 2:
                moveTorre();
                break;
            case 3:
                moveRainha();
                break;
            case 4:
                moveCavalo();
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida\n");
        }

    } while (opcao != 5);

    return 0;
}
