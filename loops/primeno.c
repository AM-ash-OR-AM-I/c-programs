#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main()
{
  int n;
  printf("Enter the number n: ");
  scanf("%d", &n);
  for (int i = 2; i < n; i++)
  {
    bool isPrime = true;
    for (int j = 2; j * j < n; j++)
    {
      if ((i % j) == 0)
      {
        isPrime = false;
        break;
      }
    }
    printf("%d is %s", i, (isPrime ? "prime\n" : "not prime\n"));
  }
}