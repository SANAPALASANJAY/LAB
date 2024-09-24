#include<stdio.h>
#include<math.h>

int main()
{
    int n,count,v,arm,num;
    int a = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    num = n;
    
    while(n>0)
    {
        count++;
        n = n/10;
    }
    for(int i = num; i > 0 ; i /= 10)
    {
        v = i%10;
        a = a + pow(v,count);
    }
    if(a==num)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    return 0;
}
