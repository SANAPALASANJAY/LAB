#include<stdio.h>

int main()
{
    int a, b,c,big;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the Greatest",a);
        }
        else
        {
            printf("%d is the Greatest",c);
        }
    }
    if(a<b)
    {
        if(b>c)
        {
            printf("%d is the Greatest",a);
        }
        else
        {
            printf("%d is the Greatest",c);
        }
    }
    return 0;
}
