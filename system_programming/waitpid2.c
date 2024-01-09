#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t pid;
  int status;
  fork();
  fork();
  pid = waitpid(pid, &status, WNOHANG);
  printf("%d\n", pid);
  if (pid == 0) {
  } else {
    if (pid > 0) {
      printf("Parent %d, %d", pid, status);
    } else if (pid == 0) {
      printf("Child is running\n");
    }
  }
}