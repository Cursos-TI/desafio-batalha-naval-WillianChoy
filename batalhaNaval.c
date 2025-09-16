#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
//Aluno Willian Choy


int main() {
    char linhas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Criado array para linha    
    int matriz [10][10];
    int cone[3][5];
    int soma = 0;
    int alvo = 1;
    
    //cria Matriz 10x10 e atribui 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }
    //cria matriz cone
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
          if(j >=2 - i && j<=2 + i){
             cone[i][j] = alvo;
          }else{
             cone[i][j] = soma;
          }
                    
        }
                
      }

    

      //cria matiz cruz
  int cruz[3][5];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      // A cruz tem a linha do meio toda com 1 e a coluna do meio com 1
      if (i == 1 || j == 2) {
        cruz[i][j] = 2;
      } else {
        cruz[i][j] = 0;
      }
      
    }
   
  }
  //cria matriz octaedro
  int octaedro[3][5];
  for(int i=0; i<3; i++){
   for(int j=0; j<5; j++){
     if(j==2 || (i ==1 && j>=1 && j<=3)){
       octaedro[i][j] = 3;
     }else{
        octaedro[i][j] = 0;
     }
     
     }
     
   } //local onde vai ser inserido os ataques na matriz central
      int Colunaocta = 0;    
      int Linhaocta = 6;     
      int Linhacruz = 4;
      int Colunacruz = 4;
      int Linhacone = 0;
      int Colunacone=3;
      //inclusão dos ataques
      for(int i=0; i<3; i++){
        for(int j=0; j<5; j++)
            
        {   
            matriz[Linhaocta + i][Colunaocta + j] = octaedro[i][j];
            matriz[Linhacruz + i][Colunacruz + j] = cruz[i][j];
            matriz[Linhacone + i][Colunacone + j] = cone[i][j];
        }
      }
    printf("     ");//espaço para alinhar linha com tabuleiro
    for (int l=0; l<10; l++){
        printf("%c ", linhas[l]);//printar as linhas ('A', 'B'..)
    }
    
   
    printf("\n ");
        for(int i=0; i<10; i++){ //PRECORRE AS LINHAS
             printf("%2d  ", i+1);
            for(int j=0; j<10; j++){
               printf("%d ", matriz[i][j]);
                
   }
    printf("\n ");
   }
                                                                

   



    return 0;
}


