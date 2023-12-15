#include "file1.c"
#include <stdio.h>
int count = 5;
int main() {
  write_extern();
  write_extern();
  printf("%d\n", count);
  return (0);
}