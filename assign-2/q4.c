#include <stdio.h>

int main()
{
  int i = 8, j = 15, k = 4;
  printf("%d\n", 2 * ((i % 5) * (4 + (j - 3) / (k + 2))));
}