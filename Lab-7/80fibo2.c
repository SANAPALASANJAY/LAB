#include<stdio.h>
void fibonacci(int n);
int main()
{
    int n;
    printf("Enter the no of values: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a,b,c;
    a = 0;
    b = 1;
    c = a+b;
    if(n == 1)
    {
        printf("%d",a);
    }
    else if(n == 2)
    {
        printf("%d",b);
    }
    else
    {
        printf(" %d ",a);
        printf(" %d ",b);
        for(int i = 2;i<n;i++)
        {
            printf(" %d ",c);
            a = b;
            b = c;
            c = a + b;
        }
    }
}
