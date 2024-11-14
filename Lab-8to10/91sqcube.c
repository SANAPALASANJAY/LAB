#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x, square, cube;
    long int* ptr;
    printf("Enter the number: ");
    scanf("%li", &x);
    ptr = &x;
    square = *(ptr) * *(ptr);
    cube = *(ptr) * *(ptr) * *(ptr);
    
    printf("Square: %li\n", square);
    printf("Cube: %li", cube);
    return 0;
}
