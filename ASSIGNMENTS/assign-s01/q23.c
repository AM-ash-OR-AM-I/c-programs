#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  fprintf(stderr, "PID=%ld\n", (long)getpid());
  while (1)
    ; // R (Running)
  return 0;
}
