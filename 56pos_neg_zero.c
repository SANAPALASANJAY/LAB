#include <stdio.h>

int main()
{
    int a[10],pos = 0,neg = 0,zero = 0;
    printf("Enter the elements : \n");
    for(int i = 0;i<10;i++) //taking the values for array
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0;i<10;i++)//loop to check if the element is positive or negative or zero
    {
        if(a[i]>0)
        {
            pos++;
        }
        if(a[i]<0)
        {
            neg++;
        }
        if(a[i] == 0)
        {
            zero++;
        }
    }
    
    printf("positive = %d\n",pos);
    printf("negative = %d\n",neg);
    printf("zero = %d",zero);
    return 0;
}
