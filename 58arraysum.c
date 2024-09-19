#include <stdio.h>
int read_arr(int a[10]);
int main()
{
    int a[10],b[10],sum[10];
    printf("Enter array1\n");
     for(int i = 0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array2\n");
     for(int i = 0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(int j = 0 ; j<10;j++)
    {
        sum[j] = a[j] + b[j];// adding the respective elements from arrays
    }
    printf("SUM ARRAY\n");
     for(int i = 0;i<10;i++)
    {
        printf("%d ",sum[i]);
    }
    return 0;
    
}
