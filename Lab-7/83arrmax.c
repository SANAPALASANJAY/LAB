#include <stdio.h>

void read_array(int a[],int n);
int max(int a[],int n);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    read_array(a,n);
    printf("%d",max(a,n));
    return 0;
}

void read_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element-%d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int max(int a[],int n)
{
    int m = a[0];
    for(int i = 1;i<n;i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}
