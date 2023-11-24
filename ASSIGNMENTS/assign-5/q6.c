#include <stdio.h>
int main() {
  int a[] = {2, 4, 6, 8, 10};
  int sum = 0, i, *b = a + 4;
  for (i = 0; i < 5; i++) {
    sum = sum + (*b - i) - *(b - i);
  }
  printf("Sum=%d\n", sum);
  return 0;
}