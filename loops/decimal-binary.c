#include <stdio.h>

long toBinary(long n)
{
  long bin = 0, f = 1, rem = 0;
  while (n)
  {
    rem = n % 2;
    bin += rem * f;
    f *= 10;
    n /= 2;
  }
  return bin;
}

int main()
{
  long n;
  scanf("%d", &n);
  long bin = toBinary(n);
  printf("%d", bin);
}