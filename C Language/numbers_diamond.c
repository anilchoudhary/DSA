#include<stdio.h>
int main()
{
  int n, a;
  n = 5;
  for (int i = 1; i <= n; i++)
  {
    a = 1;
    for (int j = i; j <= n; j++)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("%d", a++);
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    a = 1;
    for (int j = n; j >= i; j--)
    {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("%d", a++);
    }
    printf("\n");
  }
  return 0;
}