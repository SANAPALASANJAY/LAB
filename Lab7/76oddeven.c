#include <stdio.h>

void oddeven(int n);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    oddeven(n);
    return 0;
}

void oddeven(int n)
{
    if(n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
