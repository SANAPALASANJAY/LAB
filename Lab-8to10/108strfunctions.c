#include <stdio.h>
#include <stdlib.h>

void string_copy(char* a, char* b){
    
    for (int i = 0; b[i] != '\0'; i++)
    {
        *(a + i) = b[i];
    }
}

int main()
{
    char a[100];
    char b[100];
    fgets(b, 100, stdin);
    string_copy(a, b);
    
    puts(a);
    return 0;
}
