#include<stdio.h>

int main()
{
    int n,m,sum=0;
    printf("Enter the number of jars : ");
    scanf("%d",&n);
    printf("Enter the number of operations : ");
    scanf("%d",&m);
    printf("operation syntax : lower-limit upper-limit value-to-increase\n");
    int jars[n];
    for(int i = 0; i<n;i++)//setting the values of all jars to zero
    {
        jars[i] = 0;
    }
    for(int i = 0;i < m;i++)
    {
        int a,b,value;//a= lwrlmt,b=uprlmt,value= value to add 
        scanf("%d %d %d",&a,&b,&value);
        for(int j = a-1;j<b;j++)
        {
            jars[j] = jars[j] + value;
        }
    }
    
    for(int i = 0;i<n;i++)//finding sum after all operations 
    {
        sum = sum + jars[i];
    }
    
    float avg = ( (float) sum / n );
    printf("Average = %f",avg);
    return 0;
    
}
