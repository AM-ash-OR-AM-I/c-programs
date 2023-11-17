#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int pid;
  for (int i=0; i<3; i++) {
    pid = fork();
    if (pid == -1){
        printf("Error");
        return 1;
    } else if (pid==0){
        printf("Child: %d, parent Process: %d\n", getpid(), getppid());
        // break;
    } 
  }
}