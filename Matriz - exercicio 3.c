    // 3. Faça um programa que preencha uma matriz 4X3 com números
// inteiros, calcule e mostre:
//A quantidade de elementos entre 10 e 20 em cada linha;
// A média dos elementos pares da matriz


#include <stdio.h>
#include <stdlib.h>
int main  (){
    int i, j;
    int x[4][3];
    int contador = 0;
    int cont = 0;
    int media = 0;
    int pares = 0;
    
    printf (" Informe os elementos:\n");
    for ( i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            
            scanf ("%d", &x[i][j]);
            media = media + x[i][j];
            
            if ( x[i][j] > 10 && x[i][j] < 20){
            contador++;}
            
            
             if (x[i][j] % 2 == 0){
                 pares = pares + x[i][j];
                 cont++;}
                 }
             
         }
         pares = pares / cont;
         printf ("A soma de todos elementos eh: %d\n", media);
         printf("A quantidade de elementos entre 10 e 20 eh: %d\n", contador);
         printf("A media dos elemtentos pares eh: %d\n", pares);
         
         system ("pause");
         return 0; 
}
                 
    
