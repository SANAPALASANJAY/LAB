#include <stdio.h>

#define MAX(a, b) ( (a > b) ? (a) : (b) )

int main()
{
  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  int biggest = MAX(a, b);
  printf("The biggest number is: %d\n", biggest);

  return 0;
}
