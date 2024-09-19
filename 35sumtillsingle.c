#include<stdio.h>

int main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);

  while(n > 9)
    {
      int sum = 0;
      while(n != 0)
        {
          int a = n % 10;
          n = n/10;
          sum = sum + a;
        }
      n = sum;
    }
  printf("%d",n);
  return 0;
}
  
