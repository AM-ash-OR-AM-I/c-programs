#include <stdio.h>

void main()
{
  int n, s = 0, f = 1;
  printf("Enter number n: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    printf("%d ", s);
    int temp = f;
    f = s + f;
    s = temp;
  }
}