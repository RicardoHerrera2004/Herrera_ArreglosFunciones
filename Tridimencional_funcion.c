#include <stdio.h>
//Biblioteca principal para el uso del codigo

void matriz0(int a, int b, int c, int matriz[a][b])
//La funcion de la creacion de las matriz tridimencional
{

    for (int i = 1; i < a; i++) 
    // La variable de i se inicializa con 1 porque ya se va a usar una matriz fija al final llena de 1
    {
        printf("\n Matriz %d", i);
        for (int j = 0; j < b; j++)
        //Primer for para las filas de la matriz
        {
            printf("\n");
            for (int k = 0; k < c; k++)
            //Segundo for para las columnas de la matriz
            {
                matriz[j][k] = 0;
                //Llenamos la matriz de 0
                printf("%d \t", matriz[j][k]);
                //Imprimimos la matriz
            }
        }
    }
    
    printf("\n Matriz %d", a);
    //Ultima matriz llena de 1
    for (int j = 0; j < b; j++)
    {
        printf("\n");

        for (int k = 0; k < c; k++)
        {
            matriz[j][k] = 1;
            //Se crea la ultima matriz que se llene de 1
            printf("%d \t", matriz[j][k]);
            //Se imprime la matriz
        }
    }
}

int main()
//Funcion principal
{

    int a, b, c;
    //Inicializamos valores que vamos a utilizar

    printf("Ingrese el numero de matrices que desea: "); 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &b);
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &c);
    //Se pide al usuario el numero de matrices, filas y columnas que desea ingresar

    int matriz[b][c]; 
    //Se define la matriz

    matriz0(a, b, c, matriz); 
    //llamamos a la funcion que acabamos de crear
    
    return 0;
}
