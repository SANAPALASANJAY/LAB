#include <stdio.h>

void vowelcheck(char c);
int main() 
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    vowelcheck(c);
    
    return 0;
}
void vowelcheck(char c)
{
    if(c == 'a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("IT IS A VOWEL");
    }
    else
    {
        printf("NOT A VOWEL");
    }
}
