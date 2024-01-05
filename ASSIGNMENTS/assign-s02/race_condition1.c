#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int *shrd;
  int pid, status;

  shrd = malloc(sizeof(int));

  *shrd = 0;

  pid = fork();
  if (pid == 0) {
    int x = *shrd;
    x += 1;
    sleep(1);
    *shrd = x;
    printf("P-1: *shrd = %d\n", *shrd);
  } else {
    int y = *shrd;
    y -= 1;
    sleep(1);
    *shrd = y;
    printf("P-2: *shrd = %d\n", *shrd);
  }
}