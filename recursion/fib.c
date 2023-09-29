#include <stdio.h>

int fib(int a, int b, int n)
{
  if (n == 0 || n == 1)
    return n;

  return fib(b, a + b, n - 1);
}

int main()
{
  printf("Enter n:");
  int n;
  scanf("%d", &n);
  int fibN = fib(0, 1, 10);
  printf("%d", fibN);
}