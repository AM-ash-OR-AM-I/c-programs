#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    printf("Before exec\n");
    char *argv[] = {"arg1", "arg2", "arg3", NULL};
    execl("grep", argv); // second execl isn't working
    printf("After exec\n");
}