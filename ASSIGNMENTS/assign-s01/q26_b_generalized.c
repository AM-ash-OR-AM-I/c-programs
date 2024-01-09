#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t pid;
  for (int j = 0; j < 4; j++) {
    if (fork() != 0) {
      for (int j = 0; j < 4; j++) {
        if (fork() == 0) {
          break;
        }
      }
      break;
    }
  }

  printf("Child pid = %d, parent id = %d\n", getpid(), getppid());
  getchar();
}