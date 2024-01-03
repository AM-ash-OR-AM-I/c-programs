#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    execl("gcc", "../cli/commandline_args.c", "-o", "../cli/commandline_args.o", "arg1", "arg2", NULL);
    // execl("./command_line_args", "arg1", "arg2", "arg3");
    // printf("After exec\n");
}