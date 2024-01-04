#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    char *argv[] = {"arg1", "arg2", "arg3", NULL};
    // char *env[] = {"HOME=/usr/home", "LOGNAME=home"};
    execvp("commandline_args", argv); // second execl isn't working
    // execvp
    printf("After exec\n");
}