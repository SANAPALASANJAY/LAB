#include<stdio.h>

int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    //checks if the character is small case or not 
    int c = a;
    c>=97 && c<=122 ? printf("YES"):printf("NO");
    return 0;
}
