#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {

  // Post order traversal of a binary treeS
  pid_t fe, te, se;
  printf("Parent id: %d\n", getpid());
  fe = fork();
  if (fe == 0) {
    se = fork();

    if (se == 0) {
      printf("Process 1, [pid]: %d, [parent id]: %d\n", getpid(), getppid());
    } else {
      wait(NULL);
      printf("Process 2, [pid]: %d, [parent id]: %d\n", getpid(), getppid());
    }
  } else {
    wait(NULL);
    te = fork();
    if (te == 0) {
      printf("Process 3, [pid]: %d, [parent id]: %d\n", getpid(), getppid());
    } else {
      wait(NULL);
      printf("Process 4, [pid]: %d, [parent id]: %d\n", getpid(), getppid());
    }
  }
  return 0;
}