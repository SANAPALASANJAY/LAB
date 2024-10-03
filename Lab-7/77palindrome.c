#include <stdio.h>

void palindrome(int n);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}

void palindrome(int n)
{
    int rev = 0;//palindrome is number or word which same when reversed
    for(int i = n;i!=0;i/=10)
    {
        int a = i%10;
        rev = rev*10 + a;
    }
    
    if(rev == n)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}
