#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
  fork();
  fork();
  fork();
  printf("ITER\n");
  printf("ITER\n");
  return 0;
}