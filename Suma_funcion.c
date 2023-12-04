#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Se agrega las bilbiotecas para la resolucion del codigo

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
//Se crea una funcion que sume dos matrices

void imprimir(int a, int b, int matrizR[a][b])
{
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            printf("%d \t", matrizR[i][j]);
        }
    }
}
//Se crea una funcion para imprimir las matrices que vamos a necesitasr

int main()
{

    int a, b;
    //Se define las filas y columnas como a, b respectivamente

    srand(time(NULL));
    //Se crea la linea de codigo para la creacion de numeros random

    printf("Ingrese el valor de las filas: ");
    scanf("%d", &a);
    //Se pide y se escane los valores de las filas

    printf("Ingrese el valor de las columnas: ");
    scanf("%d", &b);
    //Se pide y se escane los valores de las columnas

    int matrizA[a][b];
    int matrizB[a][b];
    int matrizR[a][b];
    //Se definen las matrices que vamos a utilizar

    printf("MATRIZ A");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrizA[i][j] = rand() % 100 + 1;
        }
    }
    //Se llena la matrizA de numeros random

    imprimir(a, b, matrizA);
    //Se llama a la funcino de imprimir matrices y se imprime la matrizA

    printf("\n");
    //Se hace un salto de linea por estetica

    printf("MATRIZ B");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrizB[i][j] = rand() % 100 + 1;
        }
    }
    //Se llena la matrizB de numeros random

    imprimir(a, b, matrizB);
    //Se manda a llamar al a funcion de imprimir matrices y se imprime la matrizB

    printf("\n");
    printf("MATRIZ RESULTANTE");
    suma(a, b, matrizA, matrizB, matrizR);
    //Se manda a llamar a la funcion que suma matrices y se suma la matrizA y matrizB

    imprimir(a, b, matrizR);
    //Se llama la funcion de imprimir matrices y se imprime la matrizR (resultante)

    return 0;
}