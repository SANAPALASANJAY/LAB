#include<stdio.h>

int main()
{
    int a,n,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1;i < n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    
    if(a<=1)
    {
        printf("PRIME");
    }
    else
    {
        printf("COMPOSITE");
    }
    return 0;
}
