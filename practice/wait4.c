#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {      /* PID of child 3425 */
  pid_t childpid; /* PID of parent 3424 */
  childpid = fork();
  if (childpid == 0) {
    printf("Process ID=%ld\n", (long)getpid());
    return 0;
  }
  if (childpid != wait(NULL)) {
    // Executes only for child (childpid= 0, wait(NULL) =-1)
    printf("Return value of fork=%ld\n", (long)childpid);
    printf("Process ID=%ld\n", (long)getpid());
  }
  return 0;
}

// Only child executes

/**
 * Process ID=22638
 */