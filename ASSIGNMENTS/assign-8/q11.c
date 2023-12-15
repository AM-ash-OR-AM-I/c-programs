#include <stdio.h>
int i = 5;
int main() {
  extern int j;
  printf("\ni=%d \nj=%d", i, j);
  j = 10;
  return 0;
}
int j = 10;