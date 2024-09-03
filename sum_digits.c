#include<stdio.h>

int main()
{
    int n,dgt,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;
    
    while(n!= 0)
    {
        dgt = n%10;
        sum = sum + dgt;
        n/= 10;
    }
    printf("%d",sum);
    return 0;
}