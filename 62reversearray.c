#include <stdio.h>
int read_arr(int a[10]);
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
     for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ;i<n/2;i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    
    printf("reversed array\n");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}
