#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função responsável pela movimentação do Bispo
// Mapeameto para sentidoVertical e sentidoHorizontal
// Sentido Vertical: -1 para voltar casas e 1 para seguir em frente
// Sentido Horizontal: -1 para esquerda e 1 para movimentar se a direita
void moverBispo (int quantidadeCasas, int sentidoVertical ,int sentidoHorizontal) {
    if (quantidadeCasas <= 5) {
        if ((sentidoHorizontal == -1 || sentidoHorizontal == 1 ) &&
            (sentidoVertical == -1 || sentidoVertical == 1)) {

            for (int contador = 0;contador < quantidadeCasas ; contador++) {
            printf("");
            }

        }else {

            printf("Jogada Inválida!");

        }
        
    }else {
        printf("Movimento invalido!\nQuantidade de casas excedidas");
    }
}

// Função responsável pela movimentação da Torre
// Mapeameto para sentidoVertical e sentidoHorizontal
// Sentido Vertical: -1 para voltar casas e 1 para seguir em frente
// Sentido Horizontal: -1 para esquerda e 1 para movimentar se a direita
    void moverTorre (int quantidadeCasas, int sentidoVertical ,int sentidoHorizontal) {
        if (quantidadeCasas <= 5){

            if ((sentidoHorizontal == -1 || sentidoHorizontal == 1 ) &&
            (sentidoVertical == -1 || sentidoVertical == 1)) {

                for (int contador = 0; contador < quantidadeCasas; contador++) {

                printf("Sentido Vertical:%s\nSentido Horozontal:%s", (sentidoVertical == 1)?"Frente" : "Tráz", (sentidoHorizontal == 1) ? "Direita" : "Esquerda");

                }
                
            }else{

                printf("Jogada Inválida!");

            }

        }else{
            printf("Jogada Inválida!");
            
        } 

    }

// Função responsável pela movimentação da Rainha 
// Mapeameto para sentidoVertical e sentidoHorizontal
// Sentido Vertical: -1 para voltar casas e 1 para seguir em frente
// Sentido Horizontal: -1 para esquerda e 1 para movimentar se a direita   
    void moverRainha (int quantidadeCasas, int sentidoVertical ,int sentidoHorizontal) {
                if (quantidadeCasas <= 4){

            if ((sentidoHorizontal == -1 || sentidoHorizontal == 1 ) &&
            (sentidoVertical == -1 || sentidoVertical == 1)) {

                for (int contador = 0; contador < quantidadeCasas; contador++) {

                printf("Sentido Vertical:%s\nSentido Horozontal:%s", (sentidoVertical == 1)?"Frente" : "Tráz", (sentidoHorizontal == 1) ? "Direita" : "Esquerda");

                }
                
            }else{

                printf("Jogada Inválida!");

            }

        }else{
            printf("Jogada Inválida!");
            
        }
    }
// Função responsável pela movimentação do cavalo 
// Mapeameto para sentidoVertical e sentidoHorizontal
// Sentido Vertical: -1 para voltar casas e 1 para seguir em frente 
// Sentido Horizontal: -1 para esquerda e 1 para movimentar se a direita 



    void moverCavalo (int quantidadeCasas, int sentidoVertical ,int sentidoHorizontal) {
                 if (quantidadeCasas <= 3){

            if ((sentidoHorizontal == -1 || sentidoHorizontal == 1 ) &&
            (sentidoVertical == -1 || sentidoVertical == 1 )){

                for (int contador = 0; contador < quantidadeCasas; contador++) {
                
                    printf("%s",(sentidoHorizontal == 1 || -1) ? (sentidoHorizontal == -1)? "Baixo": "Cima":"");

                    for (int contadorLoopSecundario = 0; contador == 2 ; contadorLoopSecundario++){

                        

                    }
                    
                }
                
            }else{

                printf("Jogada Inválida!");

            }

        }else{
            printf("Jogada Inválida!");
            
        }   }

int main() {
    int pecaEscolhida;
    int contador;
    int quantidadeCasas;
    int sentidoHorizontal;
    int sentidoVertical;
        do {
        
            //Solicitação para que o usuário selecione a peça a ser movida
        printf("1 - Peão\n2 - Bispo\n3 - Cavalo\n4 - Torre\n5 - Rainha\n6 - Rei");
        printf("Peça a ser movida\n->");
        scanf("%d", &pecaEscolhida);
            
        printf("-----------------------Tabela de Tradutora-------------------\n");
        printf("|-----------------------------------------------------------|\n");
        printf("|Sentido Horizontal |     1     |     -1    |       0       |\n");
        printf("|    --------       |  Esquerda |  Direita  |     Nulo      |\n");
        printf("|-----------------------------------------------------------|\n");
        printf("|Sentido Vertical   |     1     |     -1    |       0       |\n");
        printf("|     -------       |  Frente   |    Tráz   |     Nulo      |\n");
        printf("-------------------------------------------------------------\n");
            //Filtragem com if para identificação de que peça foi selecionada
            
            //1 - Peão 
            if (pecaEscolhida == 1) {
                ;
            }

            //2 - Bispo
            if (pecaEscolhida == 2) {
                printf("Quantidade de casas\n->");
                scanf("%s", &quantidadeCasas);

                printf("Sentido Horizontal\n->");
                scanf("%d", &sentidoHorizontal);

                printf("Sentido Vertical\n->");
                scanf("%d", &sentidoVertical);

                moverBispo(quantidadeCasas, sentidoVertical, sentidoHorizontal);
            }
            
            //3 - Cavalo
            if (pecaEscolhida == 3) {
                ;
            }
            
            //4 - Torre
            if (pecaEscolhida == 4) {
   
                printf("Quantidade de casas\n->");
                scanf("%s", &quantidadeCasas);

                printf("Sentido Horizontal\n->");
                scanf("%d", &sentidoHorizontal);

                printf("Sentido Vertical\n->");
                scanf("%d", &sentidoVertical);

                moverTorre(quantidadeCasas,sentidoVertical,sentidoHorizontal);
            }
            
            //5 - Rainha 
            if (pecaEscolhida == 5) {
                printf("Sentido Horizontal\n->");
                scanf("%d", &sentidoHorizontal);

                printf("Sentido Vertical\n->");
                scanf("%d", &sentidoVertical);

               moverRainha(quantidadeCasas, sentidoVertical, sentidoHorizontal);
            }
            
            //6 - Rei
            if (pecaEscolhida == 6) {
                ;
            }
            


        } while (quantidadeCasas <= contador);
        

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
