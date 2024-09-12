#include<stdio.h>

int main()
{
    int n,great1,great2;//no of numbers given by user
    printf("Enter the number of input: ");
    scanf("%d",&n);
    int a[n];//array for the input
    printf("Enter the numbers to compare ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //assigning greatest values to compare with other elements
    great1 = a[0];
    great2 = a[1];
    for(int i = 2;i<n;i++)
    {
        if(great1<a[i])
        {
            //if a number is great than great 1 then it is assigned to greatest and 
            //other number to second greatest
            great2 = great1;
            great1 = a[i];
            
        }
        if(a[i]>great2 && a[i]<great1)
        {
            //if a number is greater than 2nd greatest and less than top one 
            //it is assigned as 2nd greatest
            great2 = a[i];
        }
    }
    
    printf(" Greatest number is %d\n",great1);
    printf(" 2nd Greatest number is %d",great2);
    return 0;
}
