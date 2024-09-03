#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for( int i = 1;i <= n*2; i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}