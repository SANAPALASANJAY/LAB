#include <stdio.h>
void exchange(int *x,int *y);
int main() {
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    exchange(&x,&y);
    printf("After Exchanging\n");
    printf("x: %d y: %d",x,y);
    return 0;
}
void exchange(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
