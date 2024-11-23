#include <stdio.h>

int main()
{
    FILE *file;
    int count = 0;
    // reading the sample text
    file = fopen("/Users/starktek/Desktop/VS CODE/sample.txt", "r");
    //foef return 0 if a valid char is present and -1 if NULL
    while (!feof(file))
    {
        char c = getc(file);
        switch (c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                     count++;
        }
    }
    printf("%d\n", count);
    fclose(file);
    return 0;
}
