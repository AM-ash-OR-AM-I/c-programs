#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {      /* PID of child 3425 */
  pid_t childpid; /* PID of parent 3424 */
  childpid = fork();
  if (childpid == 0) {
    // Child executes
    printf("Process ID=%ld\n", (long)getpid());
    return 2;
  }
  if (childpid != wait(NULL)) {
    printf("Parent failed to wait due to signal/err:\n");
    return 1;
  }
  return 0;
}

// Only child executes

/**
 * Process ID=22638
 */