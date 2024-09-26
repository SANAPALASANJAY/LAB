#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        //minimumm value
        int min = arr[i];
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
            }
        }
        //minimumm index
        int index;
        for(int k =i;k<n;k++)
        {
            if(arr[k] == min)
            {
                index = k;
            }
        }
        //swapping with min
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
    printf("\nSORTED ARRAY\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
