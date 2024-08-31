#include<stdio.h>

int main()
{
    int Maths ,Science ,social ,english ,computers;
    
    printf("Enter your Maths marks:");
    scanf("%d", &Maths);
    printf("Enter your Science marks:");
    scanf("%d", &Science);
    printf("Enter your social marks:");
    scanf("%d", &social);
    printf("Enter your english marks:");
    scanf("%d", &english);
    printf("Enter your computers marks:");
    scanf("%d", &computers);
    
    float total marks (Maths + Science + social + english + computers);
    float percentage = (total_marks/500)*100;
    printf("Total Marks: %f\n", total_marks);
    printf("Percentage %f", percentage);
    return 0;
}
