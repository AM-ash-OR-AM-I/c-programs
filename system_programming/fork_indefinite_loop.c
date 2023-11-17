#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t process;
  process = fork();

  if (process < 0) {
    perror("Fork failure\n");
    exit(1);
  }

  while (1) {
    printf("Hello process: %d, process id: %d\n", process, getpid());
  }
}