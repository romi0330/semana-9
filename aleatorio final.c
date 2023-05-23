#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int num1,num2;
    printf("Ingrese numero de columnas: \n");
    scanf("%d", &num1);
    printf("Ingrese numero de filas: \n");
    scanf("%d", &num2);
    int matriz[num2][num1];
    srand(time(NULL));
    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < num1; j++) {
            matriz[i][j]=rand()%100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }