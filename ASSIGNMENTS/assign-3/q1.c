#include <stdio.h>

int main() {
  int i = 0;
  while (i <= 5) {
    printf("%3d %3d\n", i, 10 - i);
    i = i + 1;
  }
}