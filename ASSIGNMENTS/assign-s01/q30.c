#include "q30.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t pid1, pid2, pid3;
  pid1 = fork();
  if (pid1 == 0) {
    using_execl();
  } else {
    waitpid(pid1, NULL, 0);
    pid2 = fork();
    if (pid2 == 0) {
      using_execv();
    } else {
      waitpid(pid2, NULL, 0);
      pid3 = fork();
      if (pid3 == 0) {
        using_execlp();
      } else {
        waitpid(pid3, NULL, 0);
        using_execvp();
      }
    }
  }
}

// Uses list of args
void using_execl() {
  printf("\nUsing execl():\n");
  execl("/usr/bin/grep", "-n", "using_execl", "q30.c", NULL);
}

// Uses argv[] (Argument array)
void using_execv() {
  printf("\nUsing execv():\n");
  char *argv[] = {"-n", "using_execv", "q30.c", NULL};
  execv("/usr/bin/grep", argv);
}

// execute from path (like ls -l, grep)
void using_execlp() {
  printf("\nUsing execlp() [Execute from path]:\n");
  execlp("grep", "-n", "using_execlp", "q30.c", NULL);
}

void using_execvp() {
  printf("\nUsing execvp() [Execute from path]:\n");
  char *argv[] = {"-n", "using_execvp", "q30.c", NULL};
  execvp("grep", argv);
}

void using_execle() {
  printf("\nUsing execle() [Execute from path]:\n");
  char *env[] = {"HOME=/usr/home", "LOGNAME=home"};
  execle("./usr/bin/grep", "-n", "execle", "q30.c", NULL,
         env); // second execl isn't working
  printf("After exec\n");
}

void using_execve() {}
