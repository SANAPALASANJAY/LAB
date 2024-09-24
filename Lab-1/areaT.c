#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter the length of side a: "); scanf("%f",&a);
    printf("Enter the length of side b: "); scanf("%f",&b);
    printf("Enter the length of side c: ");
    scanf("%f",&c);
    float s = (a + b + c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle: %f", area);
    return 0;
}
