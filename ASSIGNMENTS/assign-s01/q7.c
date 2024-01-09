#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  fork();
  fork() || fork();
  fork();
  printf("Really!!!\n");
  return 0;
}