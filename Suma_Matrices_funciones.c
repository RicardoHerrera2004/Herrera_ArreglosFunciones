#include <stdio.h>

int main()
{

    int a, b;
    printf("Ingrese el vlor de la fila: ");
    scanf("%d", &a);
    printf("Ingrese el valor de la columna: ");
    scanf("%d", &b);
    int matriz[a][b];

    for (int i = 0; i < a; i++)
    {
        printf ("\n");

        for (int j = 0; j < b; j++)
        {
            matriz[i][j] = 0;
            matriz[i+1][j+1]=1;
            printf("%d \t", matriz[i][j]);
        }
    }

    return 0;
}