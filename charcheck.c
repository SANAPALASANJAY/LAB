#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character :"); scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("UpperCase Letter");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("LowerCase Letter");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Symbol");
    }
    return 0;
}