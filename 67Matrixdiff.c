#include <stdio.h>

int main() 
{
    int a[3][3],b[3][3],diff[3][3];
    printf("Matrix 1 - Matrix 2 will be performed\n");
    printf("Enter Matrix 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("Enter(%d,%d):",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix 2\n");
    for(int i=0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("Enter(%d,%d):",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
           diff[i][j] = a[i][j] - b[i][j];
        }
    }
    
    printf("Matrix difference\n");
    for(int i=0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("%d  ",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}
