#include <stdio.h>

int main()
{
  int m, n, side1, side2, hypotenuse;
  printf("Enter two numbers: ");
  scanf("%d %d", &m, &n);
  side1 = m * m - n * n;
  side2 = 2 * m * n;
  hypotenuse = m * m + n * n;
  printf("The values of pythagorean triple are %d, %d and %d",
         side1, side2, hypotenuse);
}