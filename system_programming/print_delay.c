#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  for (int i = 0; i < 100; i++) {
    sleep(1);
    printf("i=%d\n", i);
  }
}