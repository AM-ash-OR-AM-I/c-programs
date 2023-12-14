#include <stdio.h>

int main() {
  int foo[4] = {1, 2, 3, 4};
  printf("foo: %p\n&foo: %p\n", foo, &foo);
  for (int i = 0; i < 4; i++) {
    printf("%dth element: %d, &foo[i]: %p\n", i, foo[i], &foo[i]);
    printf("%dth element: %d, *(foo+i): %p\n", i, *(foo + i), (foo + i));
  }
}