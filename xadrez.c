#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para a função sleep (opcional: simular delay)

// --- Funções Auxiliares de Movimento ---

// 1. BISPO (RECURSIVIDADE OBRIGATÓRIA)
// 5 casas na diagonal (a direcao é determinada pelo argumento)
void moveBispoRecursivo(int passosRestantes, char direcao) {
    
    // ASO BASE: Atingiu o limite de passos.
    if (passosRestantes == 0) {
        printf("--- Bispo: Movimento finalizado. ---\n");
        return;
    }
    
    // PASSO RECURSIVO: Imprime a direcao de 1 passo.
    if (direcao == 'a') {
        printf("Diagonal Superior Esquerda\n");
    } else if (direcao == 'b') {
        printf("Diagonal Superior Direita\n");
    } else if (direcao == 'c') {
        printf("Diagonal Inferior Esquerda\n");
    } else { // direcao == 'd'
        printf("Diagonal Inferior Direita\n");
    }
    
    // sleep(1); // Opcional: simula o tempo de um passo
    
    // CHAMADA RECURSIVA: Reduz o problema (passosRestantes - 1).
    moveBispoRecursivo(passosRestantes - 1, direcao);
}

// 2. TORRE (LOOP SIMPLES)
// 5 casas na horizontal ou vertical (a direcao é determinada pelo argumento)
void moveTorreSimples(char direcao) {
    printf("\n--- Movimento da Torre (5 casas) ---\n");
    for (int i = 0; i < 5; i++) {
        if (direcao == 'a') {
            printf("Cima\n");
        } else if (direcao == 'b') {
            printf("Baixo\n");
        } else if (direcao == 'c') {
            printf("Esquerda\n");
        } else { // direcao == 'd'
            printf("Direita\n");
        }
    }
    printf("--- Torre: Movimento finalizado. ---\n");
}

// 3. RAINHA (LOOP SIMPLES)
// 8 casas (a direcao é determinada pelo argumento)
void moveRainhaSimples(char direcao) {
    printf("\n--- Movimento da Rainha (8 casas) ---\n");
    
    for (int i = 0; i < 8; i++) {
        if (direcao == 'a') {
            printf("Cima\n");
        } else if (direcao == 'b') {
            printf("Baixo\n");
        } else if (direcao == 'c') {
            printf("Esquerda\n");
        } else if (direcao == 'd') {
            printf("Direita\n");
        } else { // Diagonais
            printf("Diagonal\n"); // Simplificado, pois a Rainha pode mover em qualquer direção
        }
    }
    printf("--- Rainha: Movimento finalizado. ---\n");
}

// 4. CAVALO (LOOPS ANINHADOS E CONDIÇÕES MÚLTIPLAS OBRIGATÓRIAS)
// 1 vez em L (a direcao é determinada pelo argumento)
void moveCavaloL(char direcao) {
    printf("\n--- Movimento do Cavalo (1 L) ---\n");

    // i: Representa o deslocamento no primeiro eixo (1 ou 2 casas)
    // j: Representa o deslocamento no segundo eixo (1 ou 2 casas)
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            
            // CONDIÇÃO MÚLTIPLA: Verifica se é um movimento 'L' (1+2 ou 2+1)
            if (i + j != 3) {
                continue; // Pula combinações inválidas (ex: 1,1 ou 2,2)
            }
            
            // Se chegou aqui, é um movimento L válido (i=2, j=1 OU i=1, j=2)
            
            // Imprime a sequência de passos que forma o 'L' na direcao escolhida
            if (direcao == 'a') { // Cima/Direita (i=Cima, j=Direita)
                printf("%s\n%s\n%s\n", (i == 2 ? "Cima" : "Direita"), (i == 2 ? "Cima" : "Direita"), (i == 2 ? "Direita" : "Cima"));
            } else { // Exemplo simplificado para outras direcoes (apenas imprime o padrao 2+1)
                 printf("Movimento L na direcao: %c\n", direcao);
            }
            
            return; // Encerra a função após o primeiro movimento válido (1 vez)
        }
    }
    printf("--- Cavalo: Movimento finalizado. ---\n");
}

// --- Função Main (Estrutura Original Adaptada) ---

int main() {
    int opcaoMenu = 0;
    char direcao;

    do {
        printf("\n===================================\n");
        printf("        DESAFIO NÍVEL MESTRE       \n");
        printf("===================================\n");
        printf("1. Mover Bispo (Recursivo)\n");
        printf("2. Mover Torre (Loop Simples)\n");
        printf("3. Mover Rainha (Loop Simples)\n");
        printf("4. Mover Cavalo (Loops Aninhados)\n");
        printf("5. Sair\n");
        printf("Selecione uma peca (1-5): ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 1: // BISPO
                printf("\nEscolha a direção para o Bispo (5 casas):\n");
                printf("[a] Superior Esquerda\n[b] Superior Direita\n[c] Inferior Esquerda\n[d] Inferior Direita\n");
                printf("Direção: ");
                scanf(" %c", &direcao);
                printf("\n--- Movimento do Bispo (5 casas) ---\n");
                moveBispoRecursivo(5, direcao);
                break;
            
            case 2: // TORRE
                printf("\nEscolha a direção para a Torre (5 casas):\n");
                printf("[a] Cima\n[b] Baixo\n[c] Esquerda\n[d] Direita\n");
                printf("Direção: ");
                scanf(" %c", &direcao);
                moveTorreSimples(direcao);
                break;
                
            case 3: // RAINHA
                printf("\nEscolha a direção para a Rainha (8 casas):\n");
                printf("Use 'a' para Cima, 'b' para Baixo, 'c' para Esquerda, 'd' para Direita, 'e' para Diagonal:\n");
                printf("Direção: ");
                scanf(" %c", &direcao);
                moveRainhaSimples(direcao);
                break;

            case 4: // CAVALO
                printf("\nEscolha a direção para o Cavalo (1 L):\n");
                printf("[a] Cima/Direita\n[b] Cima/Esquerda\n[c] Baixo/Direita\n[d] Baixo/Esquerda\n");
                printf("Direção: ");
                scanf(" %c", &direcao);
                moveCavaloL(direcao);
                break;

            case 5:
                printf("Saindo do programa. Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        
    } while (opcaoMenu != 5);

    return 0;
}