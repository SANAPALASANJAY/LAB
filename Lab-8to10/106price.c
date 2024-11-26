#include <stdio.h>

typedef struct Item_Details
{
    char Item_Name[40];
    int quantity;
    float price;
}i_d;

float Price_Calculate(i_d item)
{
    return item.quantity * item.price;
}
int main()
{
    i_d item;
    printf("Enter the name of item: ");
    fgets(item.Item_Name, 40, stdin);
    printf("Enter quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter the price of item: ");
    scanf("%f", &item.price);

    printf("ToTal Price: %f\n", Price_Calculate(item));
    return 0;
}
