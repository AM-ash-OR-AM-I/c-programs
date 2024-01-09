#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {
  pid_t cpid;
  // pid_t cpid2;
  pid_t ret_pid;
  int status = 0;
  int errno;
  cpid = fork();
  if (cpid == -1)
    exit(-1);
  if (cpid == 0) {
    printf("child-1 executing its pid%d\n", getpid());
    sleep(15);
    printf("child-1 exited\n");
    exit(0);
  } else {
    printf("Parent executing before wait() parent id is %d\n", getpid());
    // ret_pid = waitpid(cpid, &status, WNOHANG);
    ret_pid = waitpid(cpid, &status, WNOHANG);
    if (ret_pid == -1) {
      perror("error\n");
      printf("Waitpid return error %d\n", errno);
    }
    printf("cpid returned is %d\n", ret_pid);
    printf("Status is %d\n", status);
    printf("Parent exited\n");
  }
  return 0;
}