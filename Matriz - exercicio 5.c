    #include <stdio.h>

int main() {
    int x[4][4];      
    int soma[4];      
    int mult[4][4]; 
    int i = 0;
    int j = 0 ;  


    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Preencha a matriz: [%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    
    for ( j = 0; j < 4; j++) {
        soma[j] = 0;
        for ( i = 0; i < 4; i++) {
            soma[j] += x[i][j];
        }
    }
   

    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            mult[i][j] = x[i][j] * soma[j];
        }
    }  
    
    
    printf("Matriz resultante:\n");
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            printf("%4d", mult[i][j]); 
        }
        printf("\n");
    }
    system ("pause");
    return 0; 
}
