#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* str;
    int words = 1;
    str = (char*)malloc(200 * sizeof(char));
    fgets(str, 200, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (*(str + i) == ' ')
        {
            words++;
        }
    }

    printf("No.of Words = %d\n", words);
    free(str);
    return 0;
}
