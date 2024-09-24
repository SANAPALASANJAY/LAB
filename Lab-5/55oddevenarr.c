#include <stdio.h>

int main()
{
    int a[10],odd = 0,even = 0;
    printf("Enter the elements : \n");
    for(int i = 0;i<10;i++) //taking the values for array
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0;i<10;i++)//loop to check if the element is odd or even
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    
    printf("ODD = %d\n",odd);
    printf("EVEN = %d",even);
    return 0;
}
