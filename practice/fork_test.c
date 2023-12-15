#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t childpid;
  for (int i = 1; i < 8; i++) {
    childpid = fork();
    if (childpid == -1) {
      printf("Fork failed");
      break;
    }
  }
  printf("is-a-parent\n");
}