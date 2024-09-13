#include <stdio.h>

int main()
{
    int n,spc;//spc- space
    printf("Enter the height : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(spc = 0;spc<n-i;spc++)//spaces decreasing (n-i) as i increases value decreases
        {
            printf(" ");
        }
        for(int j = 1;j<=i;j++)//j-topleft part(numbers increase)
        {
            printf("%d",j);
        }
        for(int k = i-1;k>0;k--)//top tight part(no's decrease from n-1)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(int a = 1;a<n;a++)//starting from n-1(below middle)
    {
        for(int s = 1;s<=a;s++)//s-spaces increasing
        {
            printf(" ");
        }
        for(int b = 1;b<=n-a;b++)//no's should decrease going down(n-a)
        {
            printf("%d",b);
        }
        for(int c = n-a-1;c>0;c--)//bottom right part 
        {
            printf("%d",c);
        }
        printf("\n");
    }
    
    return 0;
}
