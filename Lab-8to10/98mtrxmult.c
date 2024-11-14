#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int **matrix1, **matrix2;
    int result[3][3];
    matrix1 = (int**)malloc(3 * sizeof(int*));
    matrix2 = (int**)malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++)
    {
        matrix1[i] = (int*)malloc(3 * sizeof(int));
        matrix2[i] = (int*)malloc(3 * sizeof(int));
    }
    printf("Enter elements of matrix 1\n");
    for (int i = 0; i < 3; i++)
    {
            scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    }
    printf("Enter elements of matrix 2\n");
    for (int i = 0; i < 3; i++)
    {
            scanf("%d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           int sum = 0;
           for(int k = 0; k < 3; k++)
           {
               sum = sum + (matrix1[i][k]*matrix2[k][j]);
           }
           result[i][j] = sum;
        }
    }
    printf("MULTIPLIED MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
  for (int i = 0; i < 3; i++)
  {
      free(matrix1[i]);
      free(matrix2[i]);
  }
  free(matrix1);
  free(matrix2);
 return 0;  
}
