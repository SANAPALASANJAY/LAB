#include<stdio.h>

int main()
{
    char operation;
    float a,b;
    printf("USE + , - , * , /\n");
    printf("Enter the operation :");
    scanf("%c",&operation);
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    
    switch(operation)
    {
        case '+' : printf("%f",a+b);
        break;
        case '-' : printf("%f",a-b);
        break;
        case '*' : printf("%f",a*b);
        break;
        case '/' : printf("%f",a/b);
        break;
    }
    return 0;
}