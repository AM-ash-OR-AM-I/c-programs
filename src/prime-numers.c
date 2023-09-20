#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main(void)
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  bool b = checkPrime(n);
  printf("%d is %s", n, (b ? "prime" : "not prime"));
}