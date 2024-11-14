#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,greatest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int* a;
    printf("Enter the elements\n");
    a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    greatest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (greatest < *(a + i))
        {
            greatest = *(a + i);
        }
    }

    printf("Greatest: %d\n", greatest);
    free(a);
    return 0;
}
