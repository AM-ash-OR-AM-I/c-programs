#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {                  /* PID of child 3425 */
  pid_t childpid, waitreturn; /* PID of parent 3424 */
  childpid = fork();
  if (childpid == 0) {
    // Executes for child
    printf("Process ID=%ld\n", (long)getpid());
  }
  waitreturn = wait(NULL);
  if (childpid != waitreturn) {
    // Executes only for child (childpid= 0, waitreturn =-1)
    printf("Return value of fork=%ld\n", (long)childpid);
    printf("Process ID=%ld\n", (long)getpid());
    printf("Return value of wait=%d\n", waitreturn);
    printf("\n");
  }
  return 0;
}