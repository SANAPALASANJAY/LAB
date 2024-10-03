#include<stdio.h>
#include<math.h>

void armstrong(int n);
int main()
{
    int n;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
    
}

void armstrong(int n)
{
    int count = 0;
    for(int i = n;i!=0;i/=10)
    {
        count++;
    }
    int arm = 0;
    for(int i = n;i!= 0;i/=10)
    {
        int a = i%10;
        arm = arm + pow(a,count);
    }
    
    if(arm == n)
    {
        printf("ARMSTRONG NUMBER");
    }
    else
    {
        printf("NOT ARMSTRONG NUMBER");
    }
    
}
