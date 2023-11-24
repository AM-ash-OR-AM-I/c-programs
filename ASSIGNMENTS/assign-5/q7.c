#include <stdio.h>
int SimpleFunction(int y[], int n, int x) {
  int total = y[0], loopIndex;
  for (loopIndex = 1; loopIndex <= n - 1; loopIndex++)
    total = x * total + y[loopIndex];
  return total;
}

int main() {
  int z[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d", SimpleFunction(z, 10, 2));
}