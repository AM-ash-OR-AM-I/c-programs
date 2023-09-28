#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPrime(int n)
{
  for (int j = 2; j * j <= n; j++)
  {
    if ((n % j) == 0)
      return false;
  }
  return true;
}

bool checkPrimesOptimized(int n)
{
  bool prime[n + 1];
  int primeCount = 0;
  memset(prime, true, sizeof(prime));
  for (int p = 2; p * p <= n; p++)
  {
    if (prime[p])
    {
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }
  for (int p = 2; p <= n; p++)
  {
    if (prime[p])
      primeCount++;
  }
  printf("Count of primes = %d", primeCount);
}

void checkPrimes(int n)
{
  int primeCount = 0;
  for (int i = 2; i < n; i++)
  {
    bool prime = isPrime(i);
    if (prime)
      primeCount++;
    // printf("%d is %sprime\n", i, (prime ? "" : "not "));
  }
  printf("Count of primes = %d", primeCount);
}

void main()
{
  int n;
  printf("Enter the range n: ");
  scanf("%d", &n);
  // checkPrimes(n);
  checkPrimesOptimized(n);
}