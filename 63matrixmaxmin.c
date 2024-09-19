#include <stdio.h>
int read_arr(int a[10]);
int main()
{
    int a[3][3],max,min;
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

    max = a[0][1] > a[0][2]?a[0][1] : a[0][2];
    min = a[0][1] > a[0][2]?a[0][2] : a[0][1];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
            if(a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    
    printf("MAX = %d\n",max);
    printf("MIN = %d",min);
    return 0;
}
