#include <stdio.h>
int read_arr(int a[10]);
int main()
{
    int a[3][3];
    printf("Enter the elements\n");
    
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("Enter(%d,%d): ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("MATRIX\n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;i<3;i++)
    {
        int sum = 0;
        for(int j = 0;j<3;j++)
        {
            sum = sum + a[i][j];
        }
        printf("SUM OF ROW %d = %d\n",i+1,sum);
    }
    return 0;
}
