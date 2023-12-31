#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t cpid;
    int status = 0;
    int num = 5;
    cpid = fork();

    if (cpid == 0)
    {
        printf("Child process\n");
        printf("Before exec\n");
        // execl("/usr/bin/gcc", "gcc", "commandline_args.c", "-o",
        //       "commandline_args.o",
        //       NULL);
        // execl("/bin/ls", "ls", NULL);
        execl("./commandline_args.o", "arg1", "arg2", "arg3",
              NULL); // second execl isn't working
        printf("After exec\n");
    }
    else
    {
        printf("Parent process\n");
        wait(&status);
        printf("Child process exited with status: %d\n", status);
    }
}