#include<stdio.h>

int main()
{
    char c = 'A';
    int n;
    printf("Enter the length of base : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j =1; j<=i;j++)
        {
            printf("%c",c);
        }
        printf("\n");
        c++;
    }
    return 0;
}
