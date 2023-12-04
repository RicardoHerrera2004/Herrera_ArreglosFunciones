#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suma(int a, int b, int matrizA[a][b], int matrizB[a][b], int matrizR[a][b])
{
    for (in i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}


int main () {

    int a, b;
    int matrizA[a][b];
    int matrizB[a][b];
    int matrizR[a][b];

    srand(time(NULL));

    printf ("Ingrese el valor de las filas: ");
    scanf ("%d", &a);

    printf ("Ingrese el valor de las columnas: ");
    scanf ("%d", &b);
    
    return 0;
}