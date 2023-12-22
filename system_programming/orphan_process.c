#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid = fork();
  printf("pid_t: %d\n", childPid);
  if (childPid == -1) {
    printf("Fork error");
    return 1;
  } else if (childPid == 0) {
    printf("Child %d, parent %d\n", getpid(), getppid());
    sleep(15);
    printf("Child %d, parent %d\n", getpid(),
           getppid()); // PPID gets changed as the child gets assigned to
                       // another parent.
  } else {
    printf("Parent pid %d\n", getpid());
    sleep(5);
    exit(0);
  }
}