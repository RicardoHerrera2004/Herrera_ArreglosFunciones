#include <stdio.h>

void matriz0(int a, int b, int c, int matriz[a][b])
{

    for (int i = 1; i < a; i++)
    {
        printf("\n Matriz %d", i);
        for (int j = 0; j < b; j++)
        {
            printf("\n");
            for (int k = 0; k < c; k++)
            {
                matriz[j][k] = 0;
                printf("%d \t", matriz[j][k]);
            }
        }
    }

    printf("\n Matriz %d", a);
    for (int j = 0; j < b; j++)
    {
        printf("\n");

        for (int k = 0; k < c; k++)
        {
            matriz[j][k] = 1;
            printf("%d \t", matriz[j][k]);
        }
    }
}
int main()
{

    int a, b, c;
    printf("Ingrese el numero de matrices que desea: "); 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &b);
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &c);

    int matriz[b][c]; 

    matriz0(a, b, c, matriz); 

    return 0;
}
