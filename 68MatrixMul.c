#include <stdio.h>

int main() 
{
    int a[3][3],b[3][3],mul[3][3],sum;
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
            sum = 0;
            for(int k= 0;k<3;k++)
            {
                int f = a[i][k] * b[k][j];
                sum = sum + f;
            }
            mul[i][j] = sum;
        }
    }
    
    
    printf("Matrix multiplication\n");
    for(int i=0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    } 
    return 0; 
}
