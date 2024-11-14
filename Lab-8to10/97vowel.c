#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char* str;
    int vowels = 0;
    str = (char*)malloc(200 * sizeof(char));
    fgets(str, 200, stdin);
    
    for(int i = 0; i < strlen(str); i++)
    {
        char c = *(str + i);
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                   vowels++;
                   break;
        }
    }
    printf("Number of vowels: %d", vowels);
    free(str);
    return 0;
}
