#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of side : ");
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++)
    {
        char c = 'A';
        for(int j = n ;j>n-i;j--)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
