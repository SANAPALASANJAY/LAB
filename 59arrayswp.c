#include <stdio.h>
int read_arr(int a[10]);
int main()
{
    int a[10],b[10];
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
        int temp = a[j];// logic to swap the elemens of array
        a[j] = b[j];
        b[j] = temp;
    }
    printf("after swapping\n");
    printf("array1  ");
     for(int i = 0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\narray2  ");
     for(int i = 0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
    
}
