#include<stdio.h>
#include<string.h>

int lenstr(char str[]);
int main()
{
    char str[100];
    char c;
    int i= 0;
    printf("Enter the text :");
    //gets(str);
    fgets(str,100,stdin);
    printf("%d",lenstr(str));
    return 0;
    
}
int lenstr(char str[])
{
    
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i = i-1;
    return i;
}
