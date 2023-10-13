#include <stdio.h>

int main()
{
  int i = 3 > 4, j = 4 > 3;
  int k = (i = j);
  int l = (k == j);
  printf("%d %d %d %d", i, j, k, l);
}