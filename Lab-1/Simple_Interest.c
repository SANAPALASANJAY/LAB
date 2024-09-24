#include<stdio.h>

int main()
{
    int principle, Time, Rate; // defining the variable and data type
    printf("Welcome to Simple interest Calculatoril\n");
    printf("Enter Principle: ");
    scanf("%d", &principle);
    printf("Enter Time: ");
    scanf("%d", &Time);
    printf("Enter Rate: ");
    scanf("%d", &Rate);
    int Simple_Interest = ((principle Time Rate) /100); // logic for simple interest
    printf("Simple_Interest = %d ",Simple_Interest); // printing the simple interest
    return 0;
}
