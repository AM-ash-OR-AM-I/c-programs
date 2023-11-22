#include <stdio.h>
int total(int v) {
  int count = 0;
  while (v) {
    count += v & 1;
    v >>= 1;
  }
  return count;
}

int main() {
  int x = 0, i = 5;
  for (; i > 0; i--) {
    printf("%d", i);
    x = x + total(i);
  }
  printf("%d\n", x);
  return 0;
}