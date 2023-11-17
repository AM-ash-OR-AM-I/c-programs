#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t process;
  printf("Parent's pid = %d\n", getppid());
  process = fork();

  if (process < 0) {
    perror("Fork failure\n");
    exit(1);
  }

  if (process == 0) {
    printf("Child's pid = %d\n", getppid());
  } else {
    printf("Parent's pid = %d\n", getppid());
  }
}