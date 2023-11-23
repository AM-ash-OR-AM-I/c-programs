#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t pid;
  int status;

  if ((pid = fork()) < 0) {
    printf("Error");
  } else if (pid == 0) {
    sleep(5);
    _exit(1);
  } else
    do {
      if ((pid = waitpid(pid, &status, WNOHANG)) == -1)
        printf("Error");
      else if (pid == 0)
        printf("Child is running\n");
    } while (pid == 0);
}