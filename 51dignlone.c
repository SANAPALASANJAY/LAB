#include <stdio.h>

int main()
{
    int n,d_no=1;//n for the side
    // d_no for the diagonal no 
    printf("Enter the length of side : ");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1 ; j<=n;j++)
        {
            if(j==d_no)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        d_no++;
        printf("\n");
    }
    return 0;
}
