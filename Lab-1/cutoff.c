#include<stdio.h>

int main()
{
    float Maths ,physics ,chem ,entrance_exam;
    
    printf("Enter your Maths marks:");
    scanf("%f", &Maths);
    printf("Enter your Physics marks:");
    scanf("%f", &physics);
    printf("Enter your chemistry marks:");
    scanf("%f", &chem);
    printf("Enter your entrance exam marks:");
    scanf("%f", &entrance_exam);
    float cm =( Maths/2 + physics/2 + chem/2 + entrance_exam);
    printf("CutOff Marks: %f\n", cm);
    return 0;
}
