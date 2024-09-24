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
    
    float total_marks = (Maths + Science + social + english + computers);
    float percentage = (total_marks/500)*100;
    
    if(percentage <= 100 && percentage >= 75)
    {
        printf("Distinction");
    }
    else if(percentage < 75 && percentage >= 60)
    {
        printf("First Division");
    }
    else if(percentage < 60 && percentage >= 45)
    {
        printf("Second Division");
    }
    else if(percentage < 45 && percentage >= 35)
    {
        printf("Third Division");
    }
    else 
    {
        printf("Failed");
    }
    return 0;
}
