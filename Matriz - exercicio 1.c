// 1. Faça um programa em C que carregue uma matriz 4x3 com números
// inteiros, calcule e mostre a quantidade de elementos pares entre  
// esses elementos.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int i = 0;
    int j = 0;
    int x[4][3];
    int contador = 0;
    int k = 1; 
    
    printf("Informe o elemento %d de x[j] e x[i]: ", k++);
    
          for( i = 0; i < 4; i++){
               for ( j = 0; j < 3; j++){
                   scanf ("%d", &x[i][j]);}
          }
          
          for( i = 0; i < 4; i++){
               for ( j = 0; j < 3; j++){
                   if (x[i][j] % 2 == 0){
                   contador++;}
          }
          }
          printf ("Existem %d elementos pares", contador);
          system ("pause");
          return 0;
}
