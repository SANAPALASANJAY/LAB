#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* real;
    int n;
    int *;
    printf("Enter the no of elemetns: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(n * sizeof(int));
    printf("Enter the elements\n");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        *(b + i) = *(a + i);
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
