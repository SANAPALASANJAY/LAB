#include<stdio.h>

int main()
{
    int n,sum_odd= 0,sum_even = 0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0)
        {
            sum_even += n;
        }
        else
        {
            sum_odd += n;
        }
        n--;
    }
    printf("Sum of even: %d\n",sum_even);
    printf("Sum of odd: %d",sum_odd);
    return 0;
}
