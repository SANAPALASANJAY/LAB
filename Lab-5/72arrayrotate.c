#include <stdio.h>

int main() {
    int n,r;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n],a[n];
    printf("Enter the values:");
    for(int i= 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("--ARRAY--\n");
    for(int i= 0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nEnter the value to rotate: ");
    scanf("%d",&r);
    for(int i = 0;i<n;i++)
    {
        if(i+r<= n-1)
        {
            a[i+r] = arr[i];
        }
        if(i+r> n-1)
        {
            a[i-n+r] = arr[i];
        }
    }
    
    printf("--ROTATED ARRAY--\n");
    for(int i= 0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
