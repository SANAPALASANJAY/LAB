#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

void sort(char** str, int n)
{
    char temp[30];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (strcasecmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
int main() 
{
    char** str;
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    str = (char**)malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++)
    {
        str[i] = (char*)malloc(30 * sizeof(char));
    }
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
    sort(str, n);
    printf("SORTED\n");
    for(int i = 0; i < n; i++)
    {
        puts(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
         free(str[i]);   
    }
    free(str);
    return 0;
}
