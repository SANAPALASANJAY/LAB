#include <stdio.h>

int main()
{
    int n,spc;//spc- space
    printf("Enter the height : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)//i-row
    {
        for(spc = 0;spc<n-i;spc++)
        {
            printf(" ");
        }
        for(int j = 1;j<=i;j++)//j-right side part
        {
            printf("%d",j);
        }
        for(int k = i-1;k>0;k--)//k-left side part
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
