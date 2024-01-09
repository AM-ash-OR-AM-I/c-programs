#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  fprintf(stderr, "PID=%ld\n", (long)getpid());
  while (1)
    sleep(1); // S (Sleeping)
  return 0;
}
