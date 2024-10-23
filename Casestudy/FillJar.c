#include<stdio.h>

int main()
{
    int n,m,sum=0;
    do{
    printf("Enter the number of jars : ");
    scanf("%d",&n);
    }while(n<3 || n>100);
    do{
    printf("Enter the number of operations : ");
    scanf("%d",&m);
    }while(m<1);
    printf("operation syntax : lower-limit upper-limit value-to-increase\n");
    int jars[n];
    for(int i = 0; i<n;i++)//setting the values of all jars to zero
    {
        jars[i] = 0;
    }
    for(int i = 0;i < m;i++)
    {
        int a,b,value;//a= lwrlmt,b=uprlmt,value= value to add 
        do{
            printf("Enter operation %d : ",i + 1);
        scanf("%d %d %d",&a,&b,&value);
        }while(a<1 || b>n);
        for(int j = a-1;j<b;j++)
        {
            jars[j] = jars[j] + value;
        }
    }
    
    for(int i = 0;i<n;i++)//finding sum after all operations 
    {
        sum = sum + jars[i];
    }
    
    int avg = (sum / n);
    printf("Average = %d",avg);
    return 0;
}
