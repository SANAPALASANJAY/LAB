#include <stdio.h>

int fibonacci(int n);
int main() 
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(int i = 1;1;i++)//loop to run until the fibo exceeds the number  
    {
        if(fibonacci(i) <= N)
        {
            if(fibonacci(i) == N)
            {
                printf("IsFibo");
                break;
            }
        }
        else//to stop if fibo exceeds number
        {
            printf("IsNotFibo");
            break;
        }
    }
    return 0;
}

int fibonacci(int n)//recursion
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
