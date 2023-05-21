#include <stdio.h>

#define N 4  // Tamanho das matrizes

void calcular_soma_matrizes(int n, int A[][n], int B[][n], int C[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void imprimir_matriz(int n, int matriz[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int B[N][N] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };
    
    int C[N][N];
    
    calcular_soma_matrizes(N, A, B, C);
    
    printf("Matriz A:\n");
    imprimir_matriz(N, A);
    
    printf("Matriz B:\n");
    imprimir_matriz(N, B);
    
    printf("Matriz C (A + B):\n");
    imprimir_matriz(N, C);
    
    return 0;
}