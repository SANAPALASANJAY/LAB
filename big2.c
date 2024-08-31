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
    
    if(a>b && a>c)
    {
        printf("%d is the Greatest",a);
    }
    if(b>a && b>c)
    {
        printf("%d is the Greatest",b);
    }
    if(c>b && a<c)
    {
        printf("%d is the Greatest",c);
    }

return 0;
}
