#include<stdio.h>

int main()
{
    int hours, minutes, seconds;
    printf("Enter hours: ");
    scanf("%d",&hours);
    printf("Enter minutes: ");
    scanf("%d",&minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    int total_seconds = (hours*3600 + minutes*60 + seconds);
    printf("total time in seconds: %d", total_seconds);
    return 0;
    
}