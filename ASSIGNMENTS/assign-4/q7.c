#include <stdio.h>
int fun(n) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j < n; j++) {
      printf("%d %d\n", i, j);
    }
  }
  return 1;
}

int main() { fun(5); }