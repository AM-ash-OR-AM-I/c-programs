#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

static int process_count = 0;

int main() {
  for (int i = 0; i < 4; i++) {
    fork();
    process_count++;
    printf("Hello from [child] pid: %d, [parent] pid: %d\n", getpid(),
           getppid());
  }
  return 0;
}
