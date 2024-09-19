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
    for(int i = 0;i<2;i++) //only checking row 1 and 2 because on checking every row it will be reversed to same
    {
        for(int j = 1;j<3;j++)//only checking column 2 and 3 ... we are cheking the upper triangle only to swap 
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("TRANSPOSED MATRIX\n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

