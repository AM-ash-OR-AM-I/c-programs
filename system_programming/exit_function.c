#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void exitFunction() { printf("Inside exit function\n"); }

int main() {
  atexit(exitFunction);
  printf("Inside Main\n");
  printf("Returning from main\n");
  // return 0;

  // Invokes atexit() function
  // exit(0);

  // Doesn't invoke atexit()
  // _Exit(0); // from <stdlib>
  // _exit(0); // from <unistd>
}