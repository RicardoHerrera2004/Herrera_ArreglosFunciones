#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suma(int a, int b, int matrizA[a][b], int matrizB[a][b], int matrizR[a][b])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void imprimir(int a, int b, int matrizR[a][b]) {
    for (int i = 0; i < a; i++)
    {
        printf ("\n");
        for (int j = 0; j < b; j++)
        {
            printf ("%d \t", matrizR[i][j]);
        }
    }
}

int main()
{

    int a, b;

    srand(time(NULL));

    printf("Ingrese el valor de las filas: ");
    scanf("%d", &a);

    printf("Ingrese el valor de las columnas: ");
    scanf("%d", &b);

    int matrizA[a][b];
    int matrizB[a][b];
    int matrizR[a][b];

    printf("MATRIZ A");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            matrizA[i][j] = rand() % 100 + 1;
            printf("%d \t", matrizA[i][j]);
        }
    }
    printf ("\n");
    printf("MATRIZ B");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            matrizB[i][j] = rand() % 100 + 1;
            printf("%d \t", matrizB[i][j]);
        }
    }
    
    printf ("\n");
    printf("MATRIZ RESULTANTE");
    suma(a, b, matrizA, matrizB, matrizR);
    imprimir(a, b, matrizR);
       
    return 0;
}