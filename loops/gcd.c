#include <stdio.h>

int gcd(int, int);

void main()
{
  int a, b;
  printf("Enter two no.s a & b: ");
  scanf("%d %d", &a, &b);
  int h = gcd(a, b);
  printf("GCD = %d", h);
}

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}