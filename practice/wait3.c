#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {      /* PID of child 3425 */
  pid_t childpid; /* PID of parent 3424 */
  childpid = fork();
  if (childpid == 0) {
    // Executes for child
    printf("Process ID=%ld\n", (long)getpid());
  }
  if (childpid == wait(NULL)) {
    // parent executes
    printf("Return value of fork=%ld\n", (long)childpid);
    printf("Process ID=%ld\n", (long)getpid());
  }
  return 0;
}

// Child & parent execute.

/**
Process ID=23035
Return value of fork=23035
Process ID=23034
 */