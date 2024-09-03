#include<stdio.h>

int main()
{
    int n,dgt,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n!= 0)
    {
        dgt = n%10;
        rev = (rev*10) + dgt;
        n/= 10;
    }
    printf("%d",rev);
    return 0;
}