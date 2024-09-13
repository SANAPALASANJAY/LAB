#include <stdio.h>

int main()
{
    int n,spc;//spc- space
    printf("Enter the height : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(spc = 0;spc<n-i;spc++)
        {
            printf(" ");
        }
        for(int j = 1;j<=i;j++)
        {
            printf("*");
        }
        for(int k = i-1;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int a = 1;a<n;a++)
    {
        for(int s = 1;s<=a;s++)
        {
            printf(" ");
        }
        for(int b = 1;b<=n-a;b++)
        {
            printf("*");
        }
        for(int c = n-a-1;c>0;c--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
