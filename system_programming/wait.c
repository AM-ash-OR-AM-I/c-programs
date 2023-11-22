#include <unistd.h>   
#include <stdio.h>
#include <sys/wait.h>

int main() {
    pid_t childPid1, childPid2;
    childPid1 = fork();
    if (childPid1 == 0) {
        printf("Insreturns child process id fide child1\n");
        childPid2 = fork();
        if (childPid2 ==0 )
            printf("Inside child2\n");
        else {
            wait(NULL);
            printf("Inside child1\n");
        }
    } else {
        wait(NULL); // Waits for child process to die before executing parent
        printf("Inside parent\n");
    }
}