#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int pid;
  for (int i=0; i<5; i++) {
    pid = fork();
    if (pid>0){
        printf("Parent Process: %d\n", getpid());
        break;
    } else {
        printf("Child Process: %d\n", getpid());
    }
  }
}