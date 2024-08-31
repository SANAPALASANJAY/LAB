#include <stdio.h>

int main()
{
    int a, b,c,big;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    big = a>b ? a:b:
    big = big > c ? big:c;
    printf("%d is greatest", big);
    return 0;
}
