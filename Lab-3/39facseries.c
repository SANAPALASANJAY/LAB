#include <stdio.h>
int factorial(int n);
int main()
{
    printf("series is 1/1! + 2/2! + 3/3! + .... n/n!\n");
    int n;
    float sum = 0.0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        float a =((float) i)/(factorial(i));
        sum = sum + a;
    }
    printf("sum of series = %f",sum);
    return 0;
}

int factorial(int n)
{
    for(int i = n-1;i>=1; i--)
    {
        n = n*i;
    }
    return n;
}
