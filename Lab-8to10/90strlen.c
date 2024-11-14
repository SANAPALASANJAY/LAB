#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* text;
    int lwiths = 0, lwithouts = 0, i = 0;
    text = (char*)malloc(200*sizeof(char));
    fgets(text, 200, stdin);
    
    while(*(text + i) != '\n')
    {
        if(*(text + i) == ' ')
        {
            lwiths++;
        }
        else
        {
            lwiths++;
            lwithouts++;
        }
        i++;
    }
    
    printf("length with spaces: %d\n",lwiths);
    printf("length wihtout spaces: %d", lwithouts);
    free(text);
    return 0;
}
