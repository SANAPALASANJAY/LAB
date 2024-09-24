#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for( int i = 1;i <= n; i++)
    {
        x = pow(i,2);
        printf("%d,",x);
    }
    return 0;
}
