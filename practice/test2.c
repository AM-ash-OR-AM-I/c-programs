#include <stdio.h>

void f1(int a, int b) {
  int c = a;
  a = b;
  b = c;
}

void f2(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main() {
  int a = 10, b = 20, c = 9;

  f1(a, b);
  f2(&b, &c);
  printf("%d %d %d", a, b, c);
}