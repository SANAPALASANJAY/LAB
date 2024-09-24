#include<stdio.h>

int main()
{
    int units;
    float amount = 0.0;
    printf("Enter the no of units consumed : ");
    scanf("%d",&units);
    if(units>0 && units<=200)
    {
        amount = units * 0.5;
    }
    else if(units>200 && units<=400)
    {
        amount = 100 + (units - 200) * 0.65;
    }
    else if(units>400 && units<=600)
    {
        amount = 230 + (units-400) * 0.8;
    }
    else
    {
        amount = 425 + (units-600) * 1.25;
    }
    printf("%2f",amount);
    return 0;
}
