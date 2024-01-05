#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int *amount;
  pid_t pid;

  amount = malloc(sizeof(int));

  *amount = 1000;
  pid = fork();
  if (pid == 0) {
    int x = *amount;
    x += 1;
    sleep(1);
    *amount = x;
    printf("Account balance after deposit = %d\n", *amount);
  } else {
    int y = *amount;
    y -= 1;
    sleep(1);
    *amount = y;
    printf("Account balance after withdrawal = %d\n", *amount);
  }
}