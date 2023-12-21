#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  
  int pid;
  for (int i = 0; i < 5; i++) {
    pid = fork();
    if (pid == 0) {
      printf("Child process: %d\n", getpid());
      break;
    } else {
      printf("Parent process: %d\n", getpid());
    }
  }
  // Waits for char input (Instead of infinite loop)
  getchar();
}