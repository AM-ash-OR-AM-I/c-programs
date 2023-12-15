#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = NULL;
  p = (int *)malloc(sizeof(int));
  *p = 10;
  free(p);

  // Frees this block of memory, but pointer still exists.
  // p is now a dangling pointer.

  int *q;

  // q now uses same freed block of memory.
  q = (int *)malloc(sizeof(int));
  *q = 15;

  // Now both p and q point to same memory location so 15 15 is printed.
  printf("%d %d\n", *p, *q);
  return 0;
}