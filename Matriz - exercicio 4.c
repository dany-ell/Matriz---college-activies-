// 4) Faça um programa que carregue uma matriz 5x3 com números
// inteiros, calcule e mostre a somatória dos elementos de cada linha com
// vetor.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int i, j;
    int x[5][3];
    int media = 0;
    int k = 0;
    int linha[5] ={0};
  
    printf("Informe os elementos: ");
    
          for( i = 0; i < 5; i++){
               for ( j = 0; j < 3; j++){
                   scanf ("%d", &x[i][j]);}
          }
          
          for( i = 0; i < 5; i++){
               for ( j = 0; j < 3; j++){
               linha[i] = linha[i] + x[i][j];}                  
          }
          for ( i = 0; i < 5; i++){
              printf ("Soma da linha %d: %d\n", k++, linha[i]);}
              
          system ("pause");
          return 0;
}
