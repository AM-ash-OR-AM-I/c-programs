#include <stdio.h>

int main()
{
  int i = 8.5;
  float f = 4.54;
  printf("%d", i);
  // printf("%f\n", ((int)(i + f)) % 5);
  // printf("%d", (!(6 > 5 || 14 < 9 + 6)));
  printf("%d", ('y' - 'o') / 3);
  printf("%f", 3.25 / 3);
  int a = 1, b = 2, c = 3;
  printf("%d", c += (a > 0 && a <= 10) ? ++a : a / b)
}