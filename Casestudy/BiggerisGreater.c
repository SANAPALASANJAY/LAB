#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int next_permutation(int n, char* string)
{
    int k = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (string[i] < string[i + 1])
        {
            k = i;
        }
    }
    if (k == -1)
    {
        return 0;
    }
    
    int a = -1;
    for (int i = k; i < n; i++)
    {
        if (string[i] > string[k])
        {
            a = i;
        }
    }
    
    char temp = string[a];
    string[a] = string[k];
    string[k] = temp;
    
    int i = k + 1;
    int j = n - 1;
    
    while( i < j)
    {
        temp = string[i];
        string[i++] = string[j];
        string[j--] = temp;
    }
    
    return 1;
}


int main() 
{
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    char** string;
    string = (char**)malloc(t * sizeof(char*));
    for (int i = 0; i < t; i++)
    {
        string[i] = malloc(20 * sizeof(char));
    }
    
    for (int i = 0; i < t; i++)
    {
        scanf("%s", string[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        int n = strlen(string[i]);
        if (next_permutation(n, string[i]))
        {
            puts(string[i]);
        }
        else
        {
            printf("no answer\n");
        }
    }
    
    for (int i = 0; i < t; i++)
    {
        free(string[i]);
    }
    free(string);
    return 0;
}
