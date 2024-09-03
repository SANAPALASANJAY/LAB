#include<stdio.h>

int main()
{
    int n,dgt,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;
    
    while(n!= 0)
    {
        dgt = n%10;
        rev = (rev*10) + dgt;
        n/= 10;
    }
    if(rev == num)
    {
        printf("PALINDROME!!");
    }
    else
    {
        printf("NOT A PALINDROME");
    }
    return 0;
}