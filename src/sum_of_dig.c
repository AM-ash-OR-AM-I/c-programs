#include <stdio.h>

int main(void)
{
  int sumOfDig = 0, n;
  printf("Enter number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    sumOfDig += (n % 10);
    n /= 10;
  }
  printf("Sum of dig = %d", sumOfDig);
}