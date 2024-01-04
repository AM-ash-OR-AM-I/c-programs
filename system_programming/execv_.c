#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    char *argv[] = {"arg1", "arg2", "arg3", NULL};
    execv("./p2", argv); // second execl isn't working
    printf("After exec\n");
}