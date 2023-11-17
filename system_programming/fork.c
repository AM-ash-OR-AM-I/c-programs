#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int x;
  x = 0;
  printf("Original Process: %ld, x= %d\n", (long)getpid(), x);
  fork();
//   fork();
//   fork();
  printf("Process: %ld, x= %d\n", (long)getpid(), x);
  x = 1;
  
}