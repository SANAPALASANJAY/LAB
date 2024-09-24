#include<stdio.h>

int main()
{
    int time, days, hours, minutes;
    printf("Enter the time taken: ");
    scanf("%d",&time);
    days =(time/86400);
    hours = ((time - (days*86400))/3600);
    minutes = ((time - (days*86400) - (hours*3600))/60);
    printf("Days = %d\n", days);
    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    return 0;
}
