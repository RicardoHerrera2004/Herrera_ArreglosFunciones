#include <stdio.h>
#include <stdlib.h>
#include <tima.h>

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
