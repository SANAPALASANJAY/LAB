#include <stdio.h>

int main() 
{
    int n,e,flag=0;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element to search:");
    scanf("%d",&e);
    for(int i = 0;i<n;i++)
    {
        if(a[i]==e)
        {
            printf("index:%d\n",i);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("Not found!:(");
    }
    return 0;
}
