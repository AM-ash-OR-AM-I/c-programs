#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    // execl("/usr/bin/gcc", "gcc", "commandline_args.c", "-o",
    //       "commandline_args.o",
    //       NULL);
    // execl("/bin/ls", "ls", NULL);
    execl("./commandline_args.o", "arg1", "arg2", "arg3",
          NULL); // second execl isn't working
    printf("After exec\n");
}