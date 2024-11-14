#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char* str, *strrev;
    str = (char*)malloc(300 * sizeof(char));
    strrev = (char*)malloc(300 * sizeof(char));
    printf("string\n");
    fgets(str, 300, stdin);
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        *(strrev + n - i - 1) = *(str + i);
    }
    printf("reversed");
    puts(strrev);
    free(str);
    free(strrev);
    return 0;
}
