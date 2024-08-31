#include<stdio.h>

int main() 
{
    int a,b;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    int no = a;
    for(int i = 1;i <b; i++)
    {
        a = a*no;
    }
    printf("%d",a);
    return 0;

}