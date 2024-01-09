#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  printf("Before exec\n");
  char *envp[] = {"HOME=/usr/home", "LOGNAME=ashu", NULL};
  char *argv[] = {"arg1", "arg2", "arg3", NULL};
  execve("./p2", argv, envp); // second execl isn't working
  printf("After exec\n");
}