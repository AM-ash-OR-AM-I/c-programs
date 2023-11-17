#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// int process_count = 0;

int main() {
  pid_t p1 = fork();

  if (p1 < 0) {
    perror("Fork failure\n");
    exit(1);
  }

  pid_t p2 = fork();

  if (p2 < 0) {
    perror("Fork failure\n");
    exit(1);
  }

  pid_t p3 = fork();

  if (p3 < 0) {
    perror("Fork failure\n");
    exit(1);
  }
  printf("Hello from [child] pid: %d, [parent] pid: %d\n", getpid(), getppid());
  return 0;
}