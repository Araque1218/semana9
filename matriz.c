#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar números aleatorios entre 0 y 100
int generarNumeroAleatorio() {
    return rand() % 101;
}

// Función para imprimir una matriz
void imprimirMatriz(int **matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para calcular la matriz transpuesta
int **calcularMatrizTranspuesta(int **matriz, int filas, int columnas) {
    int **matrizTranspuesta = (int **)malloc(columnas * sizeof(int *));
    for (int i = 0; i < columnas; i++) {
        matrizTranspuesta[i] = (int *)malloc(filas * sizeof(int));
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    return matrizTranspuesta;
}

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

   
