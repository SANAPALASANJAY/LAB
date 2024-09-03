#include<stdio.h>

int main()
{
    int n,a,b,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    c = a+b;
    printf("%d ",a);
    printf("%d ",b);
    
    for(int i = 2;i<n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}