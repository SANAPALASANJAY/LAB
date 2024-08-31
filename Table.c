#include<stdio.h>
int table(int a);
int main()

{
    int a:
    printf("Enter the number: ");
    scanf("%d",&a);
    table(a);
}

int table(int a)
{
    for(int i = 1; i<13;i++)
    {
        int no a*i;
        printf("%d %d = %d\n",a,i,no);
    }
    return 0;

}