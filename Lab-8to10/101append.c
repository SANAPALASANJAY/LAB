#include <stdio.h>

int main()
{
    FILE* fptr;
    fptr = fopen("/Users/starktek/Desktop/VS CODE/sample.txt", "a");

    char data[100];
    fgets(data, 100, stdin);

    fprintf(fptr, "%s", data);

    fclose(fptr);

    return 0;
}
