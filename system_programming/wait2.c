#include <unistd.h>   
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t childPid, terminatedPid;
    childPid = fork();
    if (childPid > 0) {
        terminatedPid = wait(NULL);
        printf("Terminated process: %d\n", terminatedPid);
        printf("Parent %d\n", getpid());
    
    } else {
        printf("Child %d\n", getpid());
    }
}