#include<stdio.h>
#include<math.h>

int main()
{
    int n,count,v,arm,num;
    int a;
    printf("Enter the number: ");
    scanf("%d",&n);
    num = n;
    
    while(n>0)
    {
        count++;
        n = n/10;
    }
    printf("%d\n",count);
    for(int i = num; i > 0 ; i /= 10)
    {
        v = i%10;
        a = a + pow(v,count);
    }
    printf("%d",a);
    return 0;
}