#include<stdio.h>
int main()
{
    float basic,allowances,HRA,DA;
    printf("Enter the basic salary: ");
    scanf("%f",&basic);
    printf("Enter the allowances: ");
    scanf("%f",&allowances);
    printf("HRA percent: ");
    scanf("%f",&HRA);
    printf("DA percent: ");
    scanf("%f",&DA);
    
    float gross_salary = basic + allowances + ((HRA+DA)*basic)/100 ;
    printf("gross salary = %f",gross_salary);
    return 0;
}
