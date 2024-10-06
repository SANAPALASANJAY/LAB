#include<stdio.h>

int prime(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d",prime(n));
}

int prime(int n)
{
    int flag = 0;
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag++;
            return 0;
        }
    }
    if(flag == 0)
    {
        return 1;
    }
}
