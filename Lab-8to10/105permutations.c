#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    
    int i = k + 1, j = n - 1;
    while (i < j)
    {
        temp = string[i];
        string[i++] = string[j];
        string[j--] = temp; 
    }
    return 1;
}


int main()
{
    char* string;
    string = (char*)malloc(20 * sizeof(char));

    printf("Enter the string : ");
    scanf("%s", string);
    do
    {
        puts(string);
    } while (next_permutation(strlen(string), string));
    
    return 0;
}
