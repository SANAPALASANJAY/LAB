#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_copy(char* a, char* b){
    
    for (int i = 0; b[i] != '\0'; i++)
    {
        *(a + i) = b[i];
    }
}

int string_compare(char* a, char* b){
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] > b[i])
        {
            return 1;
        }
        if (a[i] < b[i])
        {
            return -1;
        }
    }
    return 0;
}

void concat_strings(char* a, char* b){
    int i = 0;
    while (b[i] != '\0')
    {
        i++;
    }
    int count_b = i;
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    int count_a = i;
    
    a = realloc(a, (count_a + count_b) * sizeof(char));
    
    for (int i = count_a; i < count_a + count_b; i++)
    {
        a[i] = b[i - count_a];
    }
}

void reverse_string(char* a){
    int count =0;
    while (a[count] != '\0')
    {
        count++;
    }
    int i = 0;
    int j = count -1;
    
    while(i < j)
    {
        char t = a[i];
        a[i++] = a[j];
        a[j--] = t;
    }
}

int main()
{
    char *a;
    char *b;
    
    a = malloc(100 * sizeof(char));
    b = malloc(100* sizeof(char));
    
    
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    //string_copy(a, b);
    
    //concat_strings(a, b);
    
    //string_compare(a, b);
    //printf("%d", string_compare(a, b));
    
    //reverse_string(a);
    
    //printf("%s", a);
    
    return 0;
}
