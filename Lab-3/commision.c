#include<stdio.h>

int main()
{
    float sales,commision;
    printf("Enter the amount of sales: ");
    scanf("%f",&sales);
    
    if(sales <= 500)
    {
        commision = (sales)*(5/100);
        printf("commision = %f",commision);
    }
    if(sales > 500 && sales <= 2000)
    {
        commision = 35 + ((sales-500)*10)/100;
        printf("commision = %f",commision);
    }
    if(sales > 2000 && sales <=5000)
    {
        commision = 185 + ((sales-2000)*12)/100;
        printf("commision = %f",commision);
    }
    if(sales > 5000)
    {
        commision = (sales*12.5)/100;
        printf("commision = %f",commision);
    }
    return 0;
}
