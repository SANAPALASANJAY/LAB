#include<stdio.h>

int main()
{
    int a[10],sum = 0;
    
    printf("Enter the elements : \n");
    for(int i = 0 ; i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j = 0;j<10;j++)
    {
        sum = sum + a[j];
    }
    
    printf("sum of elements = %d",sum);
    return 0;
}
