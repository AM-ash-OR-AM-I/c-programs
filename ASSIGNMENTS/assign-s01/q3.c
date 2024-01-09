#include <stdio.h>
#include <unistd.h>
int main(void) {
  printf("A");
  // fflush(stdout); // clear output buffer containing 'A'
  fork();
  printf("P\n");
  return 0;
}
