#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long flip(int n, char* num)
{
    int i = strlen(num) - n;
    int j = strlen(num) - 1;

    while (i < j)
    {
        char temp = num[i];
        num[i++] = num[j];
        num[j--] = temp;
    }

    long flipped = atol(num);
    return flipped;
}


int main()
{
    int n,count = 0;
    char* num;
    num = malloc(20 * sizeof(char));
    printf("Enter the number: ");
    scanf("%s", num);
    
    printf("Enter the number of digits to flip: ");
    do
    {
        scanf("%d", &n);
    }while(n > strlen(num));

    long flipp = flip(n, num);

    printf("%li\n", flipp);
    return 0;
}
