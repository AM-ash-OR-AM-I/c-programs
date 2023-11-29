#include <stdio.h>
int SimpleFunction(int y[], int n, int x) {
  int total = y[0], loopIndex;
  for (loopIndex = 1; loopIndex <= n - 1; loopIndex++)
    total = x * total + y[loopIndex];
  return total;
}

int main() {
  int z[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  printf("%d", SimpleFunction(z, 10, 2));
}