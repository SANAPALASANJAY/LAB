#include <stdio.h>

typedef struct off_members{
    char emp_fname[20];
    char emp_lname[20];
    int emp_no;
    float basic_pay;
}data;

int main()
{
    data members[50];
    
    printf("Enter the details in format empl_no first_name last_name basic_pay\n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %s %f", &members[i].emp_no, members[i].emp_fname, members[i].emp_lname, &members[i].basic_pay);
    }
    printf("\n\nEMP_NO\tEMPLOYEE NAME\tBASIC_PAY\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t\t%s%s\t\t%f\n", members[i].emp_no, members[i].emp_fname, members[i].emp_lname, members[i].basic_pay);
    }
    
    return 0;
    
}
