#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t childPid;
  childPid = fork();

  if (childPid == 0) {
    sleep(5);
    printf("Child [pid]: %d\n", getpid());
  } else if (childPid > 0) {
    sleep(30);
    wait(NULL);
    printf("Parent [pid]: %d\n", getpid());
  }
}