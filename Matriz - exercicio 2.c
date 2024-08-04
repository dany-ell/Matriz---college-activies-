
// Faça um programa que carregue uma matriz 3x4 com números
// inteiros, calcule e mostre a quantidade de elementos entre 15 e 20. 
#include <stdio.h>
#include <stdlib.h>
int main  (){
    int i, j;
    int x[3][4];
    int soma = 0;
    int contador = 0; 
    
    printf ("Informe os elementos:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 4; j++){
            
            scanf ("%d", &x[i][j]);
            soma = soma + x[i][j];
            if (x[i][j] > 15 && x[i][j] < 20){
            contador++;}
            }
        }
     printf ("A quantidade de elementos eh: %d\n", contador);
     printf ("A soma dos elementos eh: %d\n", soma);
     system ("pause");
     return 0;
}
