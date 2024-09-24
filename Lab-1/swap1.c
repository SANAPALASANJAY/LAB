#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the number a : ");
    scanf("%d",&a);
    printf("Enter the number b : ");
    scanf("%d",&b);
    
    printf("Before swapping\n");
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    
    c = a;
    a = b;
    b = c;
    printf("After swapping\n");
    printf("a : %d\n", a);
    printf("b : %d\n", b);
    
    return 0;
}
