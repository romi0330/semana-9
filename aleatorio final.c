#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int num1,num2;
    // se pide a usuario igresar las dmensiones de la matriz
    printf("Ingrese numero de columnas: \n");
    scanf("%d", &num1);
    printf("Ingrese numero de filas: \n");
    scanf("%d", &num2);
    int matriz[num2][num1];
    //se utiliza srand para cada vz que se corre salgan numeros diferentes
    srand(time(NULL));
    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < num1; j++) {
            matriz[i][j]=rand()%100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // se realiza la matriz transpuesta y se imprime
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            matriz[j][i];
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    


    return 0;
}