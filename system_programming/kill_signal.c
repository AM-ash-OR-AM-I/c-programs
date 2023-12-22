#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  getchar();
  kill(getpid(), SIGTERM);
}