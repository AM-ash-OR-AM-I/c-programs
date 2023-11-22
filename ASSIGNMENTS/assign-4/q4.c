#include <stdio.h>
#define E 2.71828
int main() {
  int x, y, m;
  scanf("%d", &m);
  x = m;
  y = 1;
  while (x - y > E) {
    x = (x + y) / 2;
    y = m / x;
  }
  printf("%d", x);
}