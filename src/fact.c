#include <stdio.h>

void main()
{
  long long int fact = 1;
  int n = 25;
  for (int i = 2; i <= n; i++)
  {
    fact *= i;
    printf("%d, Fact = %lld\n", i, fact);
  }
}