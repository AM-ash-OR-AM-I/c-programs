#include <stdio.h>

int reverse(int n)
{
  if (n == 0)
    return 1;
  return reverse(n / 10);
}

int main(void)
{
  int sumOfDig = 0, n;
  printf("Enter number: ");
  scanf("%d", &n);
}