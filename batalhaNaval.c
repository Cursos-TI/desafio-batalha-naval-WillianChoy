#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
//Aluno Willian Choy


int main() {
    char linhas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Criado array para linha
    int navio[3]= {3, 3, 3};
    int diagonal[3] = {3, 3, 3};
    printf("     ");//espaço para alinhar linha com tabuleiro
    for (int l=0; l<10; l++){
        printf("%c ", linhas[l]);//printar as linhas ('A', 'B'..)
    }
   
    printf("\n ");
        for(int i=0; i<10; i++){ //PRECORRE AS LINHAS
             printf("%2d  ", i+1);
            for(int j=0; j<10; j++){//CRIADO OUTRO FOR DENTRO DO OUTRO PARA PERCORRER AS COLUNAS
                if(i==3 && j>=4 && j<=6){//condição se estiver dentro desses indices, printar o 3.
                    printf("%d ", navio[j-4]);
                }else if(j==7 && i>=5 && i<=7){
                    printf("%d ", navio[i-5]);
                }else if(i + j == 9 && i > 6 && i<=9){
                    printf("%d ", diagonal[j]);
                }else if(i==j && i>=0 && i<=2) {
                    printf("%d ", diagonal[j]);
                }               
                
                else{
                    printf("0 ");
            
                }
                
                
                
   }
    printf("\n ");
   }
                                                                

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
