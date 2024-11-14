#include <stdio.h>

struct student
{
    int rollno;
    char name[40];
    int marks;
};



int main()
{
    struct student data[10];
    for(int i = 0; i < 10; i++)
    {
       scanf("%d %s %d", &data[i].rollno, data[i].name, &data[i].marks);
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(data[i].marks > 500)
        {
            printf("%d  %s\n", data[i].rollno, data[i].name);
        }
    }
    return 0;
}
