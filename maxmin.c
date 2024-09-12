#include<stdio.h>

int main()
{
    int n,max,min;//n - no of numbers given by user
    printf("Enter the number of input: ");
    scanf("%d",&n);
    int a[n];//array for the input
    printf("Enter the numbers to compare ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //assigning greatest values to compare with other elements
    max = a[0]>a[1]?a[0]:a[1];
    min = a[0]<a[1]?a[0]:a[1];
    for(int i = 2;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
            
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    
    printf(" Greatest number is %d\n",max);
    printf(" lowest number is %d",min);
    return 0;
}
