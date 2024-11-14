#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* real;
    int n;
    int *copied;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    real = (int*)malloc(n * sizeof(int));
    copied = (int*)malloc(n * sizeof(int));
    printf("Enter the elements\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &real[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        *(copied + n - i - 1) = *(real + i);
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",copied[i]);
    }
    return 0;
}
