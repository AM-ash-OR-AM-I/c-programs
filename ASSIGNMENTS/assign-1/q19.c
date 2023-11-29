#include <stdio.h>

int main() {
  int i = 8;
  int j = 5;
  float x = 0.005;
  float y = -0.01;
  char c = 'c', d = 'd';
  printf("%d %d %f %d %d\n", (3 * i - 2 * j) % (2 * d - c),
         (x > y) && (i > 0) && (j < 5), 2 * x + (y == 0), (2 * x + y) == 0,
         5 * (i + j) > 'c', i++);
}