#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int n = a;
    for(int i = a-1;i>=1; i--)
    {
        a = a*i;
    }
    printf("a! = %d",a);
    return 0;
}
