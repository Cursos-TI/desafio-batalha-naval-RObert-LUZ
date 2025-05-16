

   #include <stdio.h>


int main() {
    int tabuleiro[10][10] = {{0}};

    for (int i = 0; i < 3; i++) {
        tabuleiro[5][3 + i] = 3;
        tabuleiro[2 + i][7] = 3;
    }

    printf("  ");
    for (char c = 'A'; c <= 'J'; c++) printf("%c ", c);
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;   
    } 
    
    
    
    






