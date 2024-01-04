#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    char *env[] = {"HOME=/usr/home", "LOGNAME=home"};
    execle("./commandline_args.o", "arg1", "arg2", "arg3",
           NULL, env); // second execl isn't working
    printf("After exec\n");
}