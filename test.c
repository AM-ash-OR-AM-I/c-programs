#include <stdio.h>

void f1(int &a, int &b) {
  int c;
  c = a;
  a = b;
  b = c;
}

int main() {
  int a = 10, b = 20;

  f1(a, b);
  printf("%d %d", a, b);
}