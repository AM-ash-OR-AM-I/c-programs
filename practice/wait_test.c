#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void) {
  pid_t cpid, pid;
  int status;
  pid = fork();
  if (pid == 0) {
    printf("Child part executed....\n");
    exit(0);
  } else {
    cpid = wait(&status);
    printf("status = %d\n", status);
    if (cpid == -1)
      perror("Failed to wait for child\n");
    else if (WIFEXITED(status) && !WEXITSTATUS(status))
      printf("child %ld terminate normally\n", (long)cpid);
    else if (WIFEXITED(status))
      printf("child %ld terminate with return status%d\n", (long)cpid,
             WEXITSTATUS(status));
    else if (WIFSIGNALED(status))
      printf("child %ld terminate due to uncaught signal %d\n", (long)cpid,
             WTERMSIG(status));
    else if (WIFSTOPPED(status))
      printf("Child %ld stopped due to signal %d\n", (long)cpid,
             WSTOPSIG(status));
  }
  return 0;
}