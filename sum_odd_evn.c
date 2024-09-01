#include <stdio.h>

int main()
{
    int n;
    float sum, sum_odd,sum_even;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    if(n % 2 == 0) 
    { 
        sum_odd = (n*n)/4;
        sum_even = sum-sum_odd; 
    }
    else
    {
        sum_odd = ((n+1)*(n+1))/4;
        sum_even = sum-sum_odd;
    }
    printf("sum of odd numbers = %f\n",sum_odd);
    printf("sum of even numbers = %f",sum_even);
    return 0;

}