#include <stdio.h>

void max(int n,int a[10]);
int main()
{
    int roll[10],sub1[10],sub2[10],sub3[10],t_marks = -100,idx;
    printf("Enter the data in format\nRoll.No,subject1, subject2,subject3\n");
    for(int i=0;i<10;i++)//taking input from user in given format
    {
        scanf("%d,%d,%d,%d",&roll[i],&sub1[i],&sub2[i],&sub3[i]);
    }
    printf("TOTAL MARKS\n");//printing total marks of each roll no
    for(int i=0;i<10;i++)
    {
        int t = sub1[i] + sub2[i] + sub3[i];
        printf("Roll.No%d - %d\n",i + 1,t);
        if(t > t_marks)//finding highest marks and its index
        {
            t_marks = t;
            idx = i;
        }
    }
    max(1,sub1);
    max(2,sub2);
    max(3,sub3);
    
    for(int i=0;i<10;i++)//checking if multiple persons have highest marks 
    {
        int t = sub1[i] + sub2[i] + sub3[i];
        if(t == t_marks)
        {
            printf("TOP SCORER IS ROLL NO: %d AND MARKS : %d\n",i + 1,t_marks);
        }
    }
    return 0;
}

void max(int n,int a[10])
{
    int m = a[0],idx = 0;
    for(int i = 0; i< 9;i++)
    {
        if(m < a[i + 1])//finding maximum marks in the array and it's index
        {
            m = a[i + 1];
            idx = i + 1;
        }
    }
    for(int i = 0; i< 10;i++)//checking if multiple persons have highest subject marks 
    {
        if(a[i] == m)
        {
            printf("Highest marks in Subject%d are : %d scored by Roll.No : %d\n",n,m,i + 1);
        }
    }
}
