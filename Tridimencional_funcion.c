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
}
    